//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_GRANDPRIX_H
#define PROJEKT_PO_GRANDPRIX_H
using namespace std;
#include <iostream>
#include "Track.h"

class GrandPrix {
private:
    string name;
    string date;
    Track *track;

public:
    bool is_on_list;
    GrandPrix(string name, string date);
    void changeGPName(string newName);
    void changeGPDate(string newDate);
    Track getTrack(){return *this->track;};
    void printGPDetails();
    void addTrack(Track *new_track);

    string getGPName(){return this->name;};
    string getGPDate(){return this->date;};

    ~GrandPrix();
};


#endif //PROJEKT_PO_GRANDPRIX_H
