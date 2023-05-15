//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_TEAMSLIST_H
#define PROJEKT_PO_TEAMSLIST_H
#include <iostream>
#include "../Team.h"
#include "../Generic/ObjectsList.h"
#include "DriversList.h"

using namespace std;

class TeamsList {
private:
    ObjectsList<Team> *teams_list;
    DriversList *drivers_list;

public:
    TeamsList();

    void addTeam(Team *newTeam);
    void deleteTeam(Team *team);
    void printList();
    void printDetailedList();
    void checkIfOnList(Team *team);
    void addDriversList(DriversList *driversList);
    ~TeamsList();
};



#endif //PROJEKT_PO_TEAMSLIST_H
