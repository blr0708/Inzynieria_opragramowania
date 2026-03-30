#include "Parking.h"
#include <iostream>

void Parking::zaparkuj(Samochod* s) {
    samochody.push_back(s);
    cout << "Zaparkowano samochod o nr: " << s->getNr() << " na parkingu: " << adres << endl;
}

void Parking::pokazSamochody() {
    cout << "--- Lista aut na parkingu " << adres << " ---" << endl;
    for(auto s : samochody) {
        cout << "- " << s->getNr() << endl;
    }
}
