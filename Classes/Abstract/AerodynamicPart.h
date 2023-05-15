//
// Created by x on 2022-12-20.
//

#ifndef PROJEKT_PO_AERODYNAMICPART_H
#define PROJEKT_PO_AERODYNAMICPART_H


class AerodynamicPart {
protected:
    float aero_performance{};
    float cost_of_improvement{}; //in millions per 0.001 improvement point
public:
    virtual void improvePart(float improvement_points) = 0;
    virtual void worsenPart(float deterioration_points) = 0;
    virtual void printPartDetails() = 0;
    virtual float getAeroPerformance() = 0;
    virtual float getCostOfImprovement() = 0;
};


#endif //PROJEKT_PO_AERODYNAMICPART_H
