//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_FRONTWING_H
#define PROJEKT_PO_FRONTWING_H
using namespace std;
#include <iostream>
#include "../Abstract/AerodynamicPart.h"

class FrontWing : public AerodynamicPart{

public:
    friend class Car;
    friend string describeFrontWing(FrontWing* frontWing);

    FrontWing(float aero_performance, float cost_of_improvement);
    void improvePart(float improvement_points) override;
    void worsenPart(float deterioration_points) override;
    float getAeroPerformance() override{return this->aero_performance;};
    float getCostOfImprovement()override{return this->cost_of_improvement;};
    void printPartDetails() override;

    ~FrontWing();

};


#endif //PROJEKT_PO_FRONTWING_H
