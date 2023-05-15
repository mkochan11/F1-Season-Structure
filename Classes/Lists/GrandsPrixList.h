//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_GRANDSPRIXLIST_H
#define PROJEKT_PO_GRANDSPRIXLIST_H
#include <iostream>

#include "../GrandPrix.h"
#include "../Track.h"
#include "../Generic/ObjectsList.h"

using namespace std;

class GrandsPrixList {
private:
    ObjectsList<GrandPrix> *grandsprix_list;

public:
    GrandsPrixList();
    void addGrandPrix(GrandPrix *newGP);
    void deleteGrandPrix(GrandPrix *grandPrix);
    void printList();
    void printDetailedList();
    void checkIfOnList();

    ~GrandsPrixList();
};


#endif //PROJEKT_PO_GRANDSPRIXLIST_H
