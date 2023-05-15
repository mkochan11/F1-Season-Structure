//
// Created by x on 2022-11-23.
//
#include <algorithm>
#include <list>
#include <iostream>
#include "TeamsList.h"
#include "DriversList.h"
#include "../Generic/Comparer.h"
using namespace std;


TeamsList::TeamsList() {
    this->teams_list = new ObjectsList<Team>;
    this->drivers_list = nullptr;
}

void TeamsList::addTeam(Team *newTeam) {
    if (!newTeam->is_on_list){
        teams_list->addToList(newTeam);
        newTeam->is_on_list = true;
        newTeam->addDriversList(drivers_list);
        if (newTeam->getDriver1() != nullptr){
            drivers_list->addDriver(newTeam->getDriver1());
        }
        if (newTeam->getDriver2() != nullptr){
            drivers_list->addDriver(newTeam->getDriver2());
        }
    }
    else cout<<endl<<newTeam->getName()<<" is already in the List"<<endl;
}

void TeamsList::deleteTeam(Team *team) {
    if(teams_list->getHead() == NULL){
        cout<<endl<<"No Teams in the List"<<endl;
    }
    else {
        if (team->is_on_list) {
            teams_list->deleteElement(team);
            team->is_on_list = false;
//            if (team->getDriver1() != nullptr){
//                team->getTeamDriversList()->deleteDriver(team->getDriver1());
//            }
//            if (team->getDriver2() != nullptr){
//                team->getTeamDriversList()->deleteDriver(team->getDriver2());
//            }
            team->deleteDriversList();
        } else cout << endl << team->getName() << " is not in the List" << endl;
    }
}

void TeamsList::printList() {
    if (teams_list->getHead() == nullptr){
        cout<<endl<<"No Teams in the List"<<endl;
    }
    else {
        Object<Team> *temp = teams_list->getHead();
        int index = 1;
        cout << endl << "Teams List:" << endl;
        while (temp != NULL) {
            cout << index << ". " << temp->getData()->getName() << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

void TeamsList::printDetailedList() {
    if (teams_list->getHead() == nullptr){
        cout<<endl<<"No Teams in the List"<<endl;
    }
    else {
        Object<Team> *temp = teams_list->getHead();
        int index = 1;
        cout << endl << "Detailed Teams List:" << endl;
        while (temp != NULL) {
            cout << index << ". ";
            temp->getData()->printTeamDetails();
            cout << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

void TeamsList::checkIfOnList(Team *team) {
    if (team->is_on_list){
        cout<<endl<<team->getName()<< " is on the List"<<endl;
    }else{
        cout<<endl<<team->getName()<< " is not on the List"<<endl;
    }
}

void TeamsList::addDriversList(DriversList *driversList) {
    this->drivers_list = driversList;
}


TeamsList::~TeamsList() = default;
