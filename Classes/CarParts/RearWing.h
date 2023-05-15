//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_REARWING_H
#define PROJEKT_PO_REARWING_H
#include <iostream>
#include "../Abstract/AerodynamicPart.h"

using namespace std;

class RearWing : public AerodynamicPart{

public:
    friend class Car;
    friend string describeRearWing(RearWing *rearWing);
    
    RearWing(float aero_performance, float cost_of_improvement);
    void improvePart(float improvement_points) override;
    void worsenPart(float deterioration_points) override;
    void printPartDetails() override;
    float getAeroPerformance()override{return this->aero_performance;};
    float getCostOfImprovement()override{return this->cost_of_improvement;};

    ~RearWing();
};



#endif //PROJEKT_PO_REARWING_H
