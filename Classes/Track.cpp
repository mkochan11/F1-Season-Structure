//
// Created by x on 2022-11-23.
//

#include "Track.h"

Track::Track(std::string name, std::string continent, std::string country, std::string type,
             float length, float air_density) {
    this->name=name;
    this->continent=continent;
    this->country=country;
    this->type=type;
    this->length=length;
    this->air_density=air_density;
}

void Track::changeName(std::string new_name) {
    this->name=new_name;
}
void Track::changeAirDensity(float new_air_density) {
    this->air_density=new_air_density;
}
void Track::changeLength(float new_length) {
    this->length=new_length;
}

void Track::showTrackDetails() {
    cout << "Name: " << getName() << endl;
    cout << "Continent: " << getContinent() << endl;
    cout << "Country: " << getCountry() << endl;
    cout << "Type: " << getType() << endl;
    cout << "Length: " << getLength() << endl;
    cout << "Air density: " << getAirDensity() << endl;
}

Track::~Track() = default;
