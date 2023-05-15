//
// Created by x on 2022-11-23.
//
#include <algorithm>
#include "DriversList.h"

DriversList::DriversList() {
    this->drivers_list = new ObjectsList<Driver>;
}


void DriversList::addDriver(Driver *newDriver) {
    if (!newDriver->is_on_list){
        drivers_list->addToList(newDriver);
        newDriver->is_on_list = true;
    }
    else cout<<endl<<newDriver->getSurname()<<" is already in the List"<<endl;
}

void DriversList::deleteDriver(Driver *driver) {
    if (drivers_list->getHead() == NULL){
        cout<<endl<<"No Drivers in the List, can't delete Driver"<<endl;
    }
    else {
        if (driver->is_on_list) {
            drivers_list->deleteElement(driver);
            driver->is_on_list = false;
        } else cout << endl << driver->getSurname() << " is not in the List" << endl;
    }
}

void DriversList::printList() {
    if (drivers_list->getHead() == NULL){
        cout<<endl<<"No Drivers in the List"<<endl;
    }
    else {
        Object<Driver> *temp = drivers_list->getHead();
        int index = 1;
        cout << endl << "Drivers List:" << endl;
        while (temp != NULL) {
            cout << index << ". ";
            temp->getData()->printSurnameName();
            cout << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

void DriversList::printDetailedList() {
    if (drivers_list->getHead() == NULL){
        cout<<endl<<"No Drivers in the List"<<endl;
    }
    else {
        Object<Driver> *temp = drivers_list->getHead();
        int index = 1;
        cout << endl << "Detailed Drivers List:" << endl;
        while (temp != NULL) {
            cout << index << ". ";
            temp->getData()->printDriverDetails();
            cout << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

void DriversList::checkIfOnList(Driver *driver) {
    if (driver->is_on_list){
        cout<<endl<<driver->getSurname()<< " is in the List"<<endl;
    }else{
        cout<<endl<<driver->getSurname()<< " is not in the List"<<endl;
    }
}

DriversList::~DriversList() = default;
