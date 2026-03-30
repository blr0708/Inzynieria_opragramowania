#ifndef SEKCJA_H
#define SEKCJA_H
#include <string>
#include "BazaDanych.h"

class Sekcja {
    std::string nazwa;
public:
    Sekcja(std::string n) : nazwa(n) {}
    void aktualizujDane(BazaDanych& b);
};
#endif
