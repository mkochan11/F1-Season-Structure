//
// Created by x on 2022-12-24.
//

#ifndef PROJEKT_PO_PERSON_H
#define PROJEKT_PO_PERSON_H

#include <iostream>

class Person {
protected:
    std::string name;
    std::string surname;
    std::string nationality;
    int age;
public:
    virtual void printPersonalDetails() = 0;
    virtual void printSurnameName() = 0;
    virtual void printNameSurname() = 0;
    virtual std::string getName() {return this->name;};
    virtual std::string getSurname() {return this->surname;};
    virtual std::string getNationality() {return this->nationality;};
    virtual int getAge() {return this->age;};
    virtual void changeName(std::string newName) = 0;
    virtual void changeSurname(std::string newSurname) = 0;
    virtual void changeNationality(std::string newNationality) = 0;
    virtual void changeAge(int newAge) = 0;
};



#endif //PROJEKT_PO_PERSON_H
