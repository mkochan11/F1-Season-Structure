//
// Created by x on 2022-11-23.
//

#include "RearWing.h"

RearWing::RearWing(float aero_performance, float cost_of_improvement) {
    this->aero_performance = aero_performance;
    this->cost_of_improvement = cost_of_improvement;
}

void RearWing::improvePart(float improvement_points) {
    this->aero_performance+=improvement_points;
}

void RearWing::worsenPart(float deterioration_points) {
    this->aero_performance-=deterioration_points;
}

void RearWing::printPartDetails() {
    cout<<"Rear Wing Details:"<<endl<<
        "Aero Performance: "<<this->aero_performance<<endl<<
        "Cost of Improvement (per 0,001 Improvement Point): "<<this->cost_of_improvement<<"mln $"<<endl;
}

RearWing::~RearWing() = default;
