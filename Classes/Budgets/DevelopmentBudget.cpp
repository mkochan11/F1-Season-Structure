//
// Created by x on 2022-12-20.
//

#include "DevelopmentBudget.h"
#include "../Generic/RandomValueGenerator.h"

DevelopmentBudget::DevelopmentBudget(std::string currency) {
    auto *generator = new RandomValueGenerator<double>;
    this->balance = generator->generateRandomValue(100, 300);
    this->currency = currency;
}

void DevelopmentBudget::increaseBalance(float additional_money) {
    this->balance += additional_money;
}

void DevelopmentBudget::decreaseBalance(float spent_money) {
    this->balance -= spent_money;
}

void DevelopmentBudget::printBudgetInfo() {
    cout<<"Development Budget Info:"<<endl<<
        "Balance: "<<this->balance<<" mln "<<this->currency<<endl;
}