//
// Created by x on 2022-11-23.
//

#include "Chassis.h"
#include <iostream>

Chassis::Chassis(float aero_performance, float cost_of_improvement) {
    this->aero_performance = aero_performance;
    this->cost_of_improvement = cost_of_improvement;
}

void Chassis::improvePart(float improvement_points) {
    this->aero_performance += improvement_points;
}

void Chassis::worsenPart(float deterioration_points) {
    this->aero_performance -= deterioration_points;
}

void Chassis::printPartDetails() {
    std::cout<<"Chassis Details:"<<std::endl<<
        "Chassis Performance: "<<this->aero_performance<<endl<<
        "Cost of Improvement (per 0,001 Improvement Point): "<<this->cost_of_improvement<<"mln $"<<endl;
}

Chassis::~Chassis() {}
