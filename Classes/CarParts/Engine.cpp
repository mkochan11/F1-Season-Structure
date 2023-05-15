//
// Created by x on 2022-11-23.
//

#include "Engine.h"

Engine::Engine(std::string model, float power, float cost_of_improvement) {
    this->model = model;
    this->power = power;
    this->cost_of_improvement = cost_of_improvement;
}

void Engine::changeEngineModel(std::string newName) {
    this->model = newName;
}

void Engine::changeEnginePower(float newEnginePower) {
    this->power = newEnginePower;
}
void Engine::reduceEngineHP(float subtractedHP) {
    this->power -= subtractedHP;
}
void Engine::upgradeEngineHP(float additionalHP) {
    this->power += additionalHP;
}




Engine::~Engine() = default;
