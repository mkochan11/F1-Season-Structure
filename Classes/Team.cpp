//
// Created by x on 2022-11-23.
//

#include "Team.h"

Team::Team(string name, string car_model_name) {
    this->name=name;
    this->points=0;
    this->car = new Car(car_model_name);
    this->salaries_budget = new SalariesBudget("$");
    this->development_budget = new DevelopmentBudget("$");
    this->driver1=nullptr;
    this->driver2= nullptr;
    this->is_on_list = false;
    this->drivers_list = nullptr;
}

void Team::addDriver(Driver *new_driver) {
    if (new_driver->has_team){
        cout << new_driver->getSurname() << " already has a Team." << endl << endl;
    }
    else {
        if (this->driver1 != NULL && this->driver2 != NULL) {
            cout << endl << "Cannot add " << new_driver->getSurname() << " to " << this->name
                 << ", this team already has two Drivers" << endl << endl;
        } else if (this->driver1 == NULL && !new_driver->has_team) {
            this->driver1 = new_driver;
            this->driver1->has_team = true;
            this->driver1->employer_name = this->name;
            if (!this->driver1->is_on_list && this->is_on_list){
                drivers_list->addDriver(this->driver1);
            }
        } else if (this->driver2 == NULL && !new_driver->has_team) {
            this->driver2 = new_driver;
            this->driver2->has_team = true;
            this->driver2->employer_name = this->name;
            if (!this->driver2->is_on_list && this->is_on_list){
                drivers_list->addDriver(this->driver2);
            }
        }
    }
}

void Team::deleteDriver(Driver *driver) {
    if (driver == driver1) {
        this->driver1->has_team = false;
        this->driver1->employer_name = "None";
        if (this->is_on_list){
            drivers_list->deleteDriver(this->driver1);
        }
        this->driver1 = nullptr;
        cout << driver->getSurname() << " has been fired from " << this->name << endl << endl;
    } else if (driver == driver2) {
        this->driver2->has_team = false;
        this->driver2->employer_name = "None";
        if (this->is_on_list){
            drivers_list->deleteDriver(this->driver2);
        }
        this->driver2 = nullptr;
        cout << driver->getSurname() << " has been fired from " << this->name << endl << endl;
    } else {
        cout << "No Driver " << driver->getSurname() << " found in " << this->name << "." << endl << endl;
    }
}

void Team::printDrivers() {
    cout << getName() << " Drivers:" << endl;
    if(driver1 != NULL){
    cout << "- " << this->driver1->getName() << " " << this->driver1->getSurname() << endl;}
    if(driver2 != NULL){
        cout << "- " << this->driver2->getName() << " " << this->driver2->getSurname() << endl;}
    if (driver1 == NULL && driver2 == NULL){
        cout<<this->name<<" has no Drivers"<<endl;
    }
    cout<<endl;
}
void Team::printDriversDetails() {
    if(this->driver1 == NULL && this->driver2 == NULL){
        cout<<"No drivers in "<<this->name<<endl<<endl;
    }
    else{
        if(this->driver1 != NULL){
            cout<<"-------------"<<endl;
            this->driver1->printDriverDetails();
        }
        if(this->driver2 != NULL){
            cout<<"-------------"<<endl;
            this->driver2->printDriverDetails();
        }
        cout<<endl;}

}

void Team::printTeamDetails() {
    cout << "Team Name: " << this->name << endl;
    cout<<"Team Development Budget: "<<this->development_budget->getBudget()<<" mln $"<<endl;
    cout<<"Team Points: "<<this->points<<endl;
    cout<<"---------------------------"<<endl;
    this->printCarDetails();
    cout<<"---------------------------"<<endl;
    cout<<"Team Drivers:"<<endl;
    this->printDriversDetails();
}

void Team::printCarDetails() {
    cout<<getCarModelName()<<" Details:"<<endl;
    cout<<" Front Wing performance: "<<getFrontWingAeroPerformance()<<endl;
    cout<<" Rear Wing performance: "<<getRearWingAeroPerformance()<<endl;
    cout<<" Engine horsepower: "<<getEngineHorsePower()<<endl;
    cout<<" Chassis performance: "<<getChassisAeroPerformance()<<endl;
    cout<<" Weight: "<<getCarWeight()<<endl;
    cout<<" Aero performance: "<<getCarAeroPerformance()<<endl;
    cout<<" Overall performance: "<<getCarOverallPerformance()<<endl;
}

void Team::improveFrontWing(float improvement_points) {
    this->car->improveFrontWing(improvement_points);
}
void Team::improveRearWing(float improvement_points) {
    this->car->improveRearWing(improvement_points);
}
void Team::improveChassis(float improvement_points) {
    this->car->improveChassis(improvement_points);
}
void Team::improveEngine(float improvement_points) {
    this->car->improveEngine(improvement_points);
}
void Team::increaseWeight(float additional_weight) {
    this->car->increaseWeight(additional_weight);
}


Team::~Team() {
    //delete this->balance;
    //delete this->driver1;
    //delete this->driver2;
    //delete this->car;
}



