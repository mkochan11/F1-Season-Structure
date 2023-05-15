//
// Created by x on 2022-11-23.
//

#include "Season.h"

Season::Season(int year) {
    this->year=year;
    this->teams_list = new TeamsList();
    this->drivers_list = new DriversList();
    this->grands_prix_list = new GrandsPrixList();
    this->teams_list->addDriversList(drivers_list);
}

void Season::addTeamToList(Team *newTeam) {
    teams_list->addTeam(newTeam);
    if (newTeam->getDriver1() != NULL && !newTeam->getDriver1()->is_on_list){
        drivers_list->addDriver(newTeam->getDriver1());
    }
    if (newTeam->getDriver2() != NULL && !newTeam->getDriver2()->is_on_list){
        drivers_list->addDriver(newTeam->getDriver2());
    }
}

void Season::deleteTeamFromList(Team *team) {
    teams_list->deleteTeam(team);
    if (team->getDriver1() != NULL && team->getDriver1()->is_on_list){
        drivers_list->deleteDriver(team->getDriver1());
    }
    if (team->getDriver2() != NULL && team->getDriver2()->is_on_list){
        drivers_list->deleteDriver(team->getDriver2());
    }
}

void Season::printTeamsList() {
    teams_list->printList();
}

void Season::printTeamsDetailedList() {
    teams_list->printDetailedList();
}


void Season::addDriverToList(Driver *newDriver) {
    drivers_list->addDriver(newDriver);
}

void Season::deleteDriverFromList(Driver *driver) {
    drivers_list->deleteDriver(driver);
}

void Season::printDriversList() {
    drivers_list->printList();
}

void Season::printDriversDetailedList() {
    drivers_list->printDetailedList();
}

void Season::addGrandPrixToList(GrandPrix *newGP) {
    grands_prix_list->addGrandPrix(newGP);
}

void Season::deleteGrandPrixFromList(GrandPrix *GP) {
    grands_prix_list->deleteGrandPrix(GP);
}

void Season::printGrandsPrixList() {
    grands_prix_list->printList();
}
void Season::printGrandPrixDetailedList() {
    grands_prix_list->printDetailedList();
}

Season::~Season() {
    delete teams_list;
    delete drivers_list;
    delete grands_prix_list;
}



