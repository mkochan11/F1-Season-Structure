//
// Created by x on 2022-11-28.
//

#ifndef PROJEKT_PO_MECHANIC_H
#define PROJEKT_PO_MECHANIC_H
#include "GrandsPrixEmployee.h"

class Mechanic : public GrandsPrixEmployee{
protected:
    string race_suit_size;
    int helmet_size;
public:
    Mechanic(string name, string surname, int age, string nationality, float salary, int passport_number, string hotel_room_wishes, string race_suit_size, int helmet_size);
    string getRaceSuitSize(){return this->race_suit_size;}
    int getHelmetSize(){return this->helmet_size;}
    void printMechanicDetails();
};


#endif //PROJEKT_PO_MECHANIC_H
