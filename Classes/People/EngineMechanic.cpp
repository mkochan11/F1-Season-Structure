//
// Created by x on 2022-11-28.
//

#include "EngineMechanic.h"

EngineMechanic::EngineMechanic(string name, string surname, int age, string nationality, float salary, int passport_number,
                               string hotel_room_wishes, string race_suit_size, int helmet_size, string dealt_parts)
                               : Mechanic(name, surname, age, nationality, salary, passport_number, hotel_room_wishes, race_suit_size, helmet_size) {
    this->dealt_parts = dealt_parts;
}

void EngineMechanic::printEngineMechanicDetails() {
    std::cout<<"Engine Mechanic's details: "<<std::endl<<
             "Name: "<<this->name<<std::endl<<
             "Surname: "<<this->surname<<std::endl<<
             "Age: "<<this->age<<std::endl<<
             "Nationality: "<<this->nationality<<std::endl<<
             "Salary: "<<this->salary<<std::endl<<
             "Passport number: "<<this->passport_number<<std::endl<<
             "Hotel Room Wishes: "<<this->hotel_room_wishes<<std::endl<<
             "Helmet Size: "<<this->helmet_size<<std::endl<<
             "Race Suit Size: "<<this->race_suit_size<<std::endl<<
             "Dealt Parts: "<<this->dealt_parts<<std::endl<<std::endl;
}
