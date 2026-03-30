#include <iostream>
#include "../CPP_Code/Pojazd.h"
#include "../CPP_Code/Samochod.h"
#include "../CPP_Code/Parking.h"

using namespace std;

int main() {
    Parking mojParking("ul. Mickiewicza 12");
    Samochod* auto1 = new Samochod("Audi", "KR 12345");
    Samochod* auto2 = new Samochod("BMW", "WA 98765");

    auto1->jedz();
    auto2->trab();

    mojParking.zaparkuj(auto1);
    mojParking.zaparkuj(auto2);

    mojParking.pokazSamochody();

    delete auto1;
    delete auto2;

    return 0;
}
