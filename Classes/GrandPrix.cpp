//
// Created by x on 2022-11-23.
//

#include "GrandPrix.h"

GrandPrix::GrandPrix(std::string name, std::string date) {
    this->name=name;
    this->date=date;
    this->is_on_list = false;
}

void GrandPrix::changeGPDate(std::string newDate) {
    this->date=newDate;
}
void GrandPrix::changeGPName(std::string newName) {
    this->name=newName;
}

void GrandPrix::printGPDetails() {
    cout<<this->name<<" Details:"<<endl;
    cout<<"Date: "<<this->date<<endl;
    cout<<"   Track: "<<endl;
    this->track->showTrackDetails();
    cout<<endl;
}

void GrandPrix::addTrack(Track *new_track) {
    this->track = new_track;
}



GrandPrix::~GrandPrix() {
    //delete this->track;
}
