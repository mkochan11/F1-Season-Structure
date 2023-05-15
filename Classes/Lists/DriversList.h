//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_DRIVERSLIST_H
#define PROJEKT_PO_DRIVERSLIST_H
#include <iostream>
#include "../People/Driver.h"
#include "../Generic/ObjectsList.h"

class DriversList {
private:
    ObjectsList<Driver> *drivers_list;
public:
    DriversList();

    void printList();
    void printDetailedList();
    void deleteDriver(Driver *driver);
    void addDriver(Driver *newDriver);
    void checkIfOnList(Driver *driver);

    ~DriversList();
};


#endif //PROJEKT_PO_DRIVERSLIST_H
