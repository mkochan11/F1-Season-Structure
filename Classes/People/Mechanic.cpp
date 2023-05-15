//
// Created by x on 2022-11-28.
//

#include "Mechanic.h"

Mechanic::Mechanic(string name, string surname, int age, string nationality, float salary, int passport_number,
                   string hotel_room_wishes, string race_suit_size, int helmet_size) : GrandsPrixEmployee(name, surname, age, nationality, salary, passport_number, hotel_room_wishes) {
    this->helmet_size = helmet_size;
    this->race_suit_size = race_suit_size;
}

void Mechanic::printMechanicDetails() {
    std::cout<<"Mechanic's details: "<<std::endl<<
             "Name: "<<this->name<<std::endl<<
             "Surname: "<<this->surname<<std::endl<<
             "Age: "<<this->age<<std::endl<<
             "Nationality: "<<this->name<<std::endl<<
             "Employer name: "<<this->employer_name<<std::endl<<
             "Salary: "<<this->salary<<std::endl<<
             "Passport number: "<<this->passport_number<<std::endl<<
             "Hotel Room Wishes: "<<this->hotel_room_wishes<<std::endl<<
             "Helmet Size: "<<this->helmet_size<<std::endl<<
             "Race Suit Size: "<<this->race_suit_size<<std::endl<<std::endl;
}
