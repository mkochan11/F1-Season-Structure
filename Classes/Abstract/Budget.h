//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_BUDGET_H
#define PROJEKT_PO_BUDGET_H
#include <random>
#include <iostream>

using namespace std;

class Budget {
protected:
    float balance; // given in millions of dollars
    string currency;
public:

    virtual float getBudget() = 0; // given in millions of dollars
    virtual void increaseBalance(float additional_money) = 0;
    virtual void decreaseBalance(float spent_money) = 0;
    virtual string getCurrency() = 0;
    virtual void printBudgetInfo() = 0;
};


#endif //PROJEKT_PO_BUDGET_H
