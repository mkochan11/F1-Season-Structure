//
// Created by x on 2022-11-23.
//

#include "FrontWing.h"

using namespace std;

FrontWing::FrontWing(float aero_performance, float cost_of_improvement) {
    this->aero_performance = aero_performance;
    this->cost_of_improvement = cost_of_improvement;
}

void FrontWing::improvePart(float improvement_points) {
    this->aero_performance += improvement_points;
}

void FrontWing::worsenPart(float deterioration_points) {
    this->aero_performance-=deterioration_points;
}

void FrontWing::printPartDetails() {
    cout<<"Front Wing Details:"<<endl<<
        "Aero Performance: "<<this->aero_performance<<endl<<
        "Cost of Improvement (per 0,001 Improvement Point): "<<this->cost_of_improvement<<"mln $"<<endl;
}
FrontWing::~FrontWing() = default;
