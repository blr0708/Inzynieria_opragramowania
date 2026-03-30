#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include "Pojazd.h"

class Samochod : public Pojazd {
private:
    string nrRejestracyjny;
public:
    Samochod(string m, string nr) : Pojazd(m), nrRejestracyjny(nr) {}
    void trab();
    string getNr() { return nrRejestracyjny; }
};

#endif
