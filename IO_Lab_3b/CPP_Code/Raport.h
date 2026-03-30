#ifndef RAPORT_H
#define RAPORT_H
#include <string>
#include <vector>
#include "Sekcja.h"

class Raport {
    std::string tytul;
    std::vector<Sekcja> sekcje;
public:
    Raport(std::string t) : tytul(t) {}
    void dodajSekcje(std::string n) { sekcje.push_back(Sekcja(n)); }
    void wyswietl(BazaDanych& b);
};
#endif
