//
// Created by x on 2022-12-20.
//

#include "SalariesBudget.h"
#include "../Generic/RandomValueGenerator.h"

SalariesBudget::SalariesBudget(string currency) {
    auto *generator = new RandomValueGenerator<double>;
    this->balance = generator->generateRandomValue(100, 200);
    this->currency = currency;
}

void SalariesBudget::increaseBalance(float additional_money) {
    this->balance += additional_money;
}

void SalariesBudget::decreaseBalance(float spent_money) {
    this->balance -= spent_money;
}

void SalariesBudget::printBudgetInfo() {
    cout<<"Salaries Budget Info:"<<endl<<
        "Balance: "<<this->balance<<" mln "<<this->currency<<endl;
}
