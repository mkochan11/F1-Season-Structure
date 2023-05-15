//
// Created by x on 2022-11-23.
//

#include "Driver.h"

#include <utility>

Driver::Driver(string name, string surname, string nationality, int age,
               int number, float skill, float salary) {
    this->name=name;
    this->surname=surname;
    this->nationality=nationality;
    this->age=age;
    this->number=number;
    this->skill=skill;
    this->points=0;
    this->has_team = false;
    this->is_on_list = false;
    this->employer_name = "None";
    this->salary = salary;
}

void Driver::printDriverDetails() {
    cout<<"Driver "; this->printNameSurname(); cout<<" details:"<<endl;
    cout<<" Name: "<<this->name<<endl;
    cout<<" Surname: "<<this->surname<<endl;
    cout<<" Nationality: "<< this->nationality<<endl;
    cout<<" Age: "<<this->age<<endl;
    if(has_team)cout<<" Team: "<<this->employer_name<<endl;
    cout<<" Points: "<<this->points<<endl;
    cout<<" Number: "<< this->number<<endl;
    cout<<" Skill: "<<this->skill<<endl;
}

void Driver::printSurnameName() {
    cout<<this->surname<<" "<<this->name;
}

void Driver::printNameSurname() {
    cout<<this->name<<" "<<this->surname;
}

void Driver::changeName(std::string newName) {
    cout<<"Driver " << this->name << " " << this->surname << " changed his name to " << newName << "." << endl << endl;
    this->name=newName;
}
void Driver::changeSurname(std::string newSurname) {
    cout<<"Driver " << this->name << " " << this->surname << " changed his surname to " << newSurname << "." << endl << endl;
    this->surname=newSurname;
}
void Driver::changeNationality(std::string newNationality) {
    cout<<"Driver " << this->name << " " << this->surname << " changed his nationality to " << newNationality << "." << endl << endl;
    this->nationality=newNationality;
}
void Driver::changeAge(int newAge) {
    cout<<"Driver " << this->name << " " << this->surname << " changed his age to " << newAge<<"."<< endl<<endl;
    this->age=newAge;
}
void Driver::changeNumber(int newNumber) {
    cout<<"Driver " << this->name << " " << this->surname << " changed his number to " << newNumber<<"."<< endl<<endl;
    this->number=newNumber;
}

void Driver::printPersonalDetails() {
    cout<<"Driver Personal Details:"<<endl;
    cout<<" Name: "<<this->name<<endl;
    cout<<" Surname: "<<this->surname<<endl;
    cout<<" Nationality: "<<this->nationality<<endl;
    cout<<" Age: "<<this->age<<endl;
}

void Driver::printEmployeeDetails() {
    cout<<"Driver "; this->printNameSurname(); cout<<" Employee Details:"<<endl;
    cout<<" Employer name: "<<this->employer_name<<endl;
    cout<<" Salary: "<<this->salary<<endl;
}

void Driver::getSalaryRaise(float raise) {
    cout<<"Driver " << this->name << " " << this->surname << " got salary raise by " << raise << "k $." << endl << endl;
    this->salary+=raise;
}

void Driver::getPayCut(float cut) {
    cout<<"Driver " << this->name << " " << this->surname << " got pay cut by " << cut << "k $." << endl << endl;
    this->salary-=cut;
}


Driver::~Driver() = default;
