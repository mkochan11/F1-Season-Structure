//
// Created by x on 2022-11-28.
//

#ifndef PROJEKT_PO_GRANDSPRIXEMPLOYEE_H
#define PROJEKT_PO_GRANDSPRIXEMPLOYEE_H


#include "../Abstract/Employee.h"

class GrandsPrixEmployee : public Employee {
protected:
    int passport_number;
    string hotel_room_wishes;
public:

    GrandsPrixEmployee(string name, string surname, int age, string nationality, float salary,
                       int passport_number, string hotel_room_wishes);
    string getHotelRoomWishes(){return this->hotel_room_wishes;}
    int getPassportNumber(){return this->passport_number;}
    string getEmployerName() override {return this->employer_name;};
    float getSalary() override {return this->salary;};

    void printGrandsPrixEmployeeDetails();
    void printPersonalDetails()override;
    void printEmployeeDetails() override;
    void printSurnameName() override;
    void printNameSurname() override;

    void changeName(string newName) override;
    void changeSurname(string newSurname) override;
    void changeNationality(string newNationality) override;
    void changeAge(int newAge) override;
    void getSalaryRaise(float raise)override;
    void getPayCut(float cut)override;

};


#endif //PROJEKT_PO_GRANDSPRIXEMPLOYEE_H
