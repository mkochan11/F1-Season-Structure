//
// Created by x on 2022-12-20.
//

#ifndef PROJEKT_PO_DEVELOPMENTBUDGET_H
#define PROJEKT_PO_DEVELOPMENTBUDGET_H
#include "../Abstract/Budget.h"

class DevelopmentBudget : Budget{
public:
    DevelopmentBudget(string currency);
    float getBudget()override{return this->balance;}
    string getCurrency()override{return this->currency;}
    void increaseBalance(float additional_money)override;
    void decreaseBalance(float spent_money)override;
    void printBudgetInfo()override;

    friend class Team;
    friend string describeDevelopmentBudget(DevelopmentBudget* development_budget);
};


#endif //PROJEKT_PO_DEVELOPMENTBUDGET_H
