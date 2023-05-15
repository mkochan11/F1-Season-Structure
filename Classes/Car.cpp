//
// Created by x on 2022-11-23.
//

#include "Car.h"
#include "Generic/RandomValueGenerator.h"

Car::Car(std::string model_name) {
    auto *floatGenerator = new RandomValueGenerator<float>;
    this->weight= floatGenerator->generateRandomValue(798, 801);
    this->model=model_name;
    this->front_wing = new FrontWing(floorf(floatGenerator->generateRandomValue(0.6, 0.9) * 1000) / 1000, 0.2);
    this->rear_wing = new RearWing(floorf(floatGenerator->generateRandomValue(0.6, 0.9) * 1000) / 1000, 0.2);
    this->engine = new Engine(model_name + " Engine", floorf(floatGenerator->generateRandomValue(745, 755) * 1) / 1, 0.3);
    this->chassis= new Chassis(floorf(floatGenerator->generateRandomValue(0.6, 0.9) * 1000) / 1000, 0.3);
    this->aero_performance=(floorf(((getChassisAeroPerformance()+getRearWingAeroPerformance()+getFrontWingAeroPerformance())/3)*1000)/1000);
    this->overall_performance=(floorf(((getCarAeroPerformance()+(0.001*getCarWeight())+(0.001*getEngineHorsePower()))/3)*1000)/1000);
}

void Car::improveFrontWing(float improvement_points) {
    this->front_wing->improvePart(improvement_points);
}
void Car::improveRearWing(float improvement_points) {
    this->rear_wing->improvePart(improvement_points);
}
void Car::improveChassis(float improvement_points) {
    this->chassis->improvePart(improvement_points);
}
void Car::improveEngine(float improvement_points) {
    this->engine->upgradeEngineHP(improvement_points);
}
void Car::increaseWeight(float additional_weight) {
    this->weight += additional_weight;
}

Car::~Car() {
    delete this->engine;
    delete front_wing;
    delete rear_wing;
    delete chassis;
}
