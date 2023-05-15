//
// Created by x on 2022-11-28.
//

#include "GrandsPrixEmployee.h"

GrandsPrixEmployee::GrandsPrixEmployee(string name, string surname, int age, string nationality, float salary,
                                       int passport_number, string hotel_room_wishes){
    this->hotel_room_wishes = hotel_room_wishes;
    this->passport_number = passport_number;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationality = nationality;
    this->salary = salary;
    this->employer_name = "None";
}

void GrandsPrixEmployee::changeName(std::string newName) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " changed his name to " << newName << "." << endl << endl;
    this->name=newName;
}
void GrandsPrixEmployee::changeSurname(std::string newSurname) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " changed his surname to " << newSurname << "." << endl << endl;
    this->surname=newSurname;
}
void GrandsPrixEmployee::changeNationality(std::string newNationality) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " changed his nationality to " << newNationality << "." << endl << endl;
    this->nationality=newNationality;
}
void GrandsPrixEmployee::changeAge(int newAge) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " changed his age to " << newAge<<"."<< endl<<endl;
    this->age=newAge;
}

void GrandsPrixEmployee::printGrandsPrixEmployeeDetails() {
    std::cout<<"Grands Prix Employee's details: "<<std::endl<<
             "Name: "<<this->name<<std::endl<<
             "Surname: "<<this->surname<<std::endl<<
             "Age: "<<this->age<<std::endl<<
             "Nationality: "<<this->nationality<<std::endl<<
             "Employer name: "<<this->employer_name<<std::endl<<
             "Salary: "<<this->salary<<std::endl<<
             "Passport number: "<<this->passport_number<<std::endl<<
             "Hotel Room Wishes: "<<this->hotel_room_wishes<<std::endl<<std::endl;
}

void GrandsPrixEmployee::printPersonalDetails() {
    std::cout<<"Grands Prix Employee's Personal details: "<<std::endl<<
             "Name: "<<this->name<<std::endl<<
             "Surname: "<<this->surname<<std::endl<<
             "Age: "<<this->age<<std::endl<<
             "Nationality: "<<this->nationality<<std::endl;
}

void GrandsPrixEmployee::printSurnameName() {
    cout<<this->surname<<" "<<this->name;
}

void GrandsPrixEmployee::printNameSurname() {
    cout<<this->name<<" "<<this->surname;
}

void GrandsPrixEmployee::printEmployeeDetails() {
    cout<<"Grands Prix Employee "; this->printNameSurname(); cout<<" Employee Details:"<<endl;
    cout<<" Employer name: "<<this->employer_name<<endl;
    cout<<" Salary: "<<this->salary<<endl;
}

void GrandsPrixEmployee::getSalaryRaise(float raise) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " got salary raise by " << raise << "k $." << endl << endl;
    this->salary+=raise;
}

void GrandsPrixEmployee::getPayCut(float cut) {
    cout<<"Grands Prix Employee " << this->name << " " << this->surname << " got pay cut by " << cut << "k $." << endl << endl;
    this->salary-=cut;
}
