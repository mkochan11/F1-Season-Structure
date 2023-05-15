//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_CAR_H
#define PROJEKT_PO_CAR_H
#include <iostream>
#include <random>
#include "CarParts/FrontWing.h"
#include "CarParts/Chassis.h"
#include "CarParts/RearWing.h"
#include "CarParts/Engine.h"
using namespace std;


class Car {
private:
    string model;
    FrontWing *front_wing;
    RearWing *rear_wing;
    Chassis *chassis;
    Engine *engine;
    float aero_performance;
    float weight;
    float overall_performance;

public:
    Car(string model_name);
    friend class Team;
    friend string describeCar(Car *car);

    void increaseWeight(float additional_weight);
    void improveFrontWing(float improvement_points);
    void improveRearWing(float improvement_points);
    void improveChassis(float improvement_points);
    void improveEngine(float improvement_points);

    float getFrontWingAeroPerformance(){return front_wing->getAeroPerformance();};
    float getRearWingAeroPerformance(){return rear_wing->getAeroPerformance();};
    float getEngineHorsePower(){return this->engine->getEnginePower();};
    float getChassisAeroPerformance(){return chassis->getAeroPerformance();};
    float getCarWeight(){return weight;};
    float getCarAeroPerformance(){return this->aero_performance;};
    float getCarOverallPerformance(){return this->overall_performance;};
    string getCarModelName(){return model;};

    ~Car();
};


#endif //PROJEKT_PO_CAR_H
