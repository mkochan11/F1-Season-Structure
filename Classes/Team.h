//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_TEAM_H
#define PROJEKT_PO_TEAM_H

#include <iostream>
#include "Car.h"
#include "People/Driver.h"
#include "Budgets/SalariesBudget.h"
#include "Budgets/DevelopmentBudget.h"
#include "Lists/DriversList.h"

using namespace std;

class Team {
private:
    string name;
    Car *car;
    Driver *driver1, *driver2;
    SalariesBudget *salaries_budget;
    DevelopmentBudget *development_budget;
    DriversList* drivers_list;

    int points;

public:
    bool is_on_list;

    friend string describeTeam(Team *team);
    Team(string name, string car_model_name);

    void operator += (int plusPoints){
        this->points += plusPoints;
    }
    void operator -= (int minusPoints){
        this->points -= minusPoints;
    }

    void addDriver(Driver *new_driver);
    void deleteDriver(Driver *driver);
    void printDrivers();
    void printDriversDetails();
    void printCarDetails();
    void printTeamDetails();
    void improveFrontWing(float improvement_points);
    void improveRearWing(float improvement_points);
    void improveChassis(float improvement_points);
    void improveEngine(float improvement_points);
    void increaseWeight(float improvement_points);
    void addDriversList(DriversList *driversList){this->drivers_list = driversList;};
    void deleteDriversList(){this->drivers_list = nullptr;};

    string getName(){return name;};
    int getPoints(){return points;};
    double getSalariesBudget(){return salaries_budget->getBudget();};
    double getDevelopmentBudget(){return development_budget->getBudget();};
    string getCarModelName(){return car->getCarModelName();};
    float getFrontWingAeroPerformance(){return car->getFrontWingAeroPerformance();};
    float getRearWingAeroPerformance(){return car->getRearWingAeroPerformance();};
    float getEngineHorsePower(){return car->getEngineHorsePower();};
    float getChassisAeroPerformance(){return car->getChassisAeroPerformance();};
    float getCarWeight(){return car->getCarWeight();};
    float getCarAeroPerformance(){return car->getCarAeroPerformance();};
    float getCarOverallPerformance(){return car->getCarOverallPerformance();};
    Driver* getDriver1(){if(driver1 != nullptr) return driver1;
        return nullptr;
    };
    Driver* getDriver2(){if(driver2 != nullptr) return driver2;
        return nullptr;
    };
    DriversList* getTeamDriversList(){return this->drivers_list;};

    ~Team();
};
#endif //PROJEKT_PO_TEAM_H
