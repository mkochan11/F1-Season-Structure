//
// Created by x on 2022-12-20.
//

#ifndef PROJEKT_PO_SALARIESBUDGET_H
#define PROJEKT_PO_SALARIESBUDGET_H
#include "../Abstract/Budget.h"

class SalariesBudget : Budget{
public:
    SalariesBudget(string currency);
    float getBudget()override{return this->balance;}
    string getCurrency()override{return this->currency;}
    void increaseBalance(float additional_money)override;
    void decreaseBalance(float spent_money)override;
    void printBudgetInfo()override;

    void operator += (float addMoney){
        this->balance += addMoney;
    }
    void operator -= (float minMoney){
        this->balance -= minMoney;
    }
};


#endif //PROJEKT_PO_SALARIESBUDGET_H
