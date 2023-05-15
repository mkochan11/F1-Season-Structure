//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_SEASON_H
#define PROJEKT_PO_SEASON_H
#include <iostream>
#include "Team.h"
//#include "TeamsRanking.h"
#include "Lists/TeamsList.h"
#include "Lists/DriversList.h"
#include "Lists/GrandsPrixList.h"
#include "Generic/ObjectsList.h"

class Season {
protected:
    int year;
    TeamsList *teams_list;
    DriversList *drivers_list;
    GrandsPrixList *grands_prix_list;
public:

    explicit Season(int year);

    void addTeamToList(Team *newTeam);
    void deleteTeamFromList(Team *team);
    void printTeamsList();
    void printTeamsDetailedList();

    void addDriverToList(Driver *newDriver);
    void deleteDriverFromList(Driver *driver);
    void printDriversList();
    void printDriversDetailedList();

    void addGrandPrixToList(GrandPrix *newGP);
    void deleteGrandPrixFromList(GrandPrix *GP);
    void printGrandsPrixList();
    void printGrandPrixDetailedList();


    ~Season();
};


#endif //PROJEKT_PO_SEASON_H
