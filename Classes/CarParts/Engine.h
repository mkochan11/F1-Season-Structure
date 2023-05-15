//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_ENGINE_H
#define PROJEKT_PO_ENGINE_H

#include <iostream>
using namespace std;

class Engine {
private:
    string model;
    float power; //Horse Power
    float cost_of_improvement;
public:
    friend class Car;

    Engine(string model, float power, float cost_of_improvement);
    string getEngineModel(){return this->model;};
    float getEnginePower(){return this->power;};
    float getCostOfImprovement(){return this->cost_of_improvement;};

    void changeEngineModel(string newName);
    void changeEnginePower(float newEnginePower);
    void upgradeEngineHP(float additionalHP);
    void reduceEngineHP(float subtractedHP);

    friend string describeEngine(Engine *engine);

    ~Engine();
};

#endif //PROJEKT_PO_ENGINE_H
