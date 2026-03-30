#ifndef PARKING_H
#define PARKING_H

#include <vector>
#include <string>
#include "Samochod.h"

class Parking {
private:
    string adres;
    vector<Samochod*> samochody;
public:
    Parking(string adr) : adres(adr) {}
    void zaparkuj(Samochod* s);
    void pokazSamochody();
};

#endif
