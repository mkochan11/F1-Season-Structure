//
// Created by x on 2022-11-28.
//

#ifndef PROJEKT_PO_ENGINEMECHANIC_H
#define PROJEKT_PO_ENGINEMECHANIC_H
#include "Mechanic.h"

class EngineMechanic : public Mechanic{
private:
    string dealt_parts;
public:
    EngineMechanic(string name, string surname, int age, string nationality, float salary, int passport_number, string hotel_room_wishes, string race_suit_size, int helmet_size, string dealt_parts);
    string getDealtParts(){return this->dealt_parts;}
    void printEngineMechanicDetails();
};


#endif //PROJEKT_PO_ENGINEMECHANIC_H
