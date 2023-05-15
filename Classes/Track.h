//
// Created by x on 2022-11-23.
//

#ifndef PROJEKT_PO_TRACK_H
#define PROJEKT_PO_TRACK_H
#include <iostream>
using namespace std;


class Track {
private:
    string name;
    string continent;
    string country;
    float length; // in kilometers
    string type;
    float air_density; //range (0, 1) - fraction of density at sea level (1,225 kg/m3)

public:
    Track(string name, string continent, string country, string type, float length, float air_density);
    string getName(){return this->name;};
    string getContinent(){return this->continent;};
    string getCountry(){return this->country;};
    string getType(){return this->type;};
    float  getLength(){return this->length;};
    float  getAirDensity(){return this->air_density;};
    void showTrackDetails();

    void changeName(string new_name);
    void changeLength(float new_length);
    void changeAirDensity(float new_air_density);

    ~Track();
};


#endif //PROJEKT_PO_TRACK_H
