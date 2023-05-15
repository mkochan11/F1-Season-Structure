#include <iostream>
#include <sstream>
#include "Classes/Season.h"
#include "Classes/Team.h"
#include "Classes/People/Driver.h"
#include "Classes/Track.h"
#include "Classes/GrandPrix.h"
#include "Classes/Abstract/Budget.h"
#include "Classes/People/EngineMechanic.h"
#include "Classes/Generic/Comparer.h"
#include "Classes/Generic/ObjectsList.h"
#include "Classes/Generic/ObjectsListSorter.h"
#include "Classes/CarParts/Chassis.h"

using namespace std;

int main() {

    std::cout<<endl << "--------F1 Season--------" <<endl<<endl;
    Season Season2022(2022);

    Team RedBull("Red Bull", "RB18");
    Team Mercedes("Mercedes", "W13");
    Team Ferrari("Ferrari", "SF2000");
    Driver Verstappen("Max", "Verstappen", "Netherlands", 25, 1, 94, 133.33);
    Driver Perez("Sergio", "Perez", "Mexico", 34, 11, 92, 115);
    Driver Hamilton("Lewis", "Hamilton", "UK", 35, 44, 93, 150);
    Driver Leclerc("Charles", "Leclerc", "Monaco", 24, 16, 93, 130);
    RedBull.addDriver(&Verstappen);
    RedBull.addDriver(&Perez);
    RedBull.addDriver(&Hamilton);
    Mercedes.addDriver(&Hamilton);
    Season2022.addTeamToList(&RedBull);
    Season2022.addTeamToList(&Mercedes);
    //Mercedes.addDriver(&Leclerc);
    Season2022.deleteTeamFromList(&RedBull);
    Season2022.printTeamsList();

    Season2022.printDriversList();
    Season2022.printDriversDetailedList();

    RedBull.printTeamDetails();
    RedBull += 10;
    RedBull -= 5;
    Verstappen += 25;
    Perez += 10;
    RedBull.printTeamDetails();

    RedBull.improveFrontWing(0.012);
    RedBull.improveRearWing(0.003);
    RedBull.improveEngine(2);
    RedBull.increaseWeight(10);
    RedBull.improveChassis(0.03);
    Verstappen.changeNumber(33);

    Track Sakhir("Sakhir", "Asia", "Bahrain","Race",5.412,0.97);
    Track Interlagos("Interlagos", "South America", "Brazil","Race",4.309,0.86);
    GrandPrix BahrainGP("Bahrain Grand Prix", "20.03.2022");
    GrandPrix BrazilGP("Brazil Grand Prix", "30.10.2022");
    BahrainGP.addTrack(&Sakhir);
    BrazilGP.addTrack(&Interlagos);
    Season2022.addGrandPrixToList(&BahrainGP);
    Season2022.addGrandPrixToList(&BrazilGP);
    Season2022.addGrandPrixToList(&BrazilGP);
    Season2022.printGrandsPrixList();
    Season2022.printGrandPrixDetailedList();

    cout<<describeTeam(&RedBull)<<endl;
    cout<<describeTeam(&Mercedes)<<endl;

    EngineMechanic JohnJohnson("John", "Johnson", 47,"UK", 35.500, 12345678, "Big TV, Breakfast to bed", "XL", 56, "MGU-K");
    Mechanic AdrianNewey("Adrian", "Newey", 45, "UK", 70.500, 98654321, "Jacuzzi", "L", 54);
    GrandsPrixEmployee JanKowalski("Jan", "Kowalski", 50, "Poland", 35.500, 12345678, "Big TV, Breakfast to bed");
    JohnJohnson.printEngineMechanicDetails();
    AdrianNewey.printMechanicDetails();
    AdrianNewey.printEmployeeDetails();
    JohnJohnson.printPersonalDetails();

    auto *budgetComparer = new Comparer<Team>;
    auto *floatComparer = new Comparer<float>;
    cout << "Higher balance has " << budgetComparer->returnTeamWithHigherDevelopmentBudget(RedBull, Mercedes).getName() << ", equal: " <<
         floatComparer->returnHigherValue(RedBull.getDevelopmentBudget(), Mercedes.getDevelopmentBudget()) <<" mln $"<< endl;

    return 0;
}

string describeDevelopmentBudget(DevelopmentBudget* development_budget){
    stringstream result;
    result << "Development Budget: " << development_budget->balance << " mln $" << endl;
    return result.str();
}

string describeChassis(Chassis* chassis){
    stringstream result;
    result<<"Chassis aero performace: "<<chassis->aero_performance<<endl;
    return result.str();
}

string describeEngine(Engine* engine){
    stringstream result;
    result <<engine->model<<" Horse Power: "<<engine->power<<endl;
    return result.str();
}

string describeFrontWing(FrontWing* frontWing){
    stringstream result;
    result <<"Front wing aero performance: "<<frontWing->aero_performance<<endl;
    return result.str();
}
string describeRearWing(RearWing* rearWing){
    stringstream result;
    result <<"Rear wing aero performance: "<<rearWing->aero_performance<<endl;
    return result.str();
}

string describeCar(Car* car){
    stringstream result;
    result<< car->model + " details: \n- " +
            describeChassis(car->chassis)+"- "+
            describeEngine(car->engine)+"- "+
            describeFrontWing(car->front_wing)+"- "+
            describeRearWing(car->rear_wing)+
            "- Overall aero performance: "<<car->aero_performance<<"\n"<<
            "- Car weight: "<<car->weight<<" kg\n"<<
            "- Overall Car performance: "<<car->overall_performance<<"\n";
    return result.str();
}

string describeDriver(Driver *driver){
    if (driver!=NULL){
    stringstream result;
    result<<"Driver "<<driver->surname<<" details: \n- Name: "<<driver->name<<"\n- Surname: "<<driver->surname<<"\n- Team: "<<driver->employer_name<<"\n- Age: "<<driver->age<<
            "\n- Nationality: "<<driver->nationality<<"\n- Number: "<<driver->number<<"\n- Skill: "<<driver->skill<<endl;
    return result.str();}
    return "";
}

string describeTeam(Team* team){
    return "Team " + team->name + " details: \n" +
            describeDevelopmentBudget(team->development_budget)+
            describeCar(team->car)+
            describeDriver(team->driver1)+
            describeDriver(team->driver2);
}


