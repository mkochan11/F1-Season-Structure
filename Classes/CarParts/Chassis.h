//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_CHASSIS_H
#define PROJEKT_PO_CHASSIS_H

#include <string>
#include "../Abstract/AerodynamicPart.h"

using namespace std;

class Chassis : AerodynamicPart{

public:
    friend class Car;
    friend string describeChassis(Chassis *chassis);

    explicit Chassis(float aero_performance, float cost_of_improvement);
    void improvePart(float improvement_points) override;
    void worsenPart(float deterioration_points) override;
    void printPartDetails() override;
    float getAeroPerformance() override{return this->aero_performance;};
    float getCostOfImprovement()override{return this->cost_of_improvement;}

    ~Chassis();
};


#endif //PROJEKT_PO_CHASSIS_H
