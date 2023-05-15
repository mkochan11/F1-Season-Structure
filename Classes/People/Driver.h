//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_DRIVER_H
#define PROJEKT_PO_DRIVER_H
#include <iostream>
#include "../Abstract/Employee.h"

using namespace std;

class Driver : Employee{
private:
    int number;
    int points;
    float skill;

public:
    bool has_team;
    bool is_on_list;

    Driver(string name, string surname, string nationality, int age, int number, float skill, float salary);
    void changeName(string newName) override;
    void changeSurname(string newSurname) override;
    void changeNationality(string newNationality) override;
    void changeAge(int newAge) override;
    void changeNumber(int newNumber);
    void getSalaryRaise(float raise) override;
    void getPayCut(float cut)override;

    string getEmployerName() override {return this->employer_name;};
    int getPoints() { return this->points; };
    int getNumber() { return this->number; };
    int getAge()override {return this->age;};
    float getSkill(){ return this->skill;};
    float getSalary() override {return this->salary;};
    string getName() override {return this->name;};
    string getSurname() override {return this->surname;};
    string getNationality() override {return this->nationality;};
    void printSurnameName() override;

    void printNameSurname() override;
    void printPersonalDetails() override;
    void printEmployeeDetails() override;
    void printDriverDetails();
    void operator += (int plusPoints){
        this->points += plusPoints;
    }

    void operator -= (int minusPoints){
        this->points -= minusPoints;
    }
    explicit operator bool(){
        //cout<<this->getSurname()<<" has team"<<endl;
        return this->has_team;
    }
    bool operator !(){
        cout<<this->getSurname()<<" doesn't have team"<<endl;
        return !this->has_team;
    }

    friend class Team;
    friend string describeDriver(Driver *driver);


    ~Driver();
};


#endif //PROJEKT_PO_DRIVER_H
