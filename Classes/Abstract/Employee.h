//
// Created by x on 2022-11-28.
//

#ifndef PROJEKT_PO_EMPLOYEE_H
#define PROJEKT_PO_EMPLOYEE_H
#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person {
protected:
    string employer_name;
    float salary;
public:
    virtual void printEmployeeDetails() = 0;
    virtual string getEmployerName() = 0;
    virtual float getSalary() = 0;
    virtual void getSalaryRaise(float raise) = 0;
    virtual void getPayCut(float cut) = 0;
};


#endif //PROJEKT_PO_EMPLOYEE_H
