#include "../CPP_Code/Raport.h"
#include "../CPP_Code/BazaDanych.h"
#include <iostream>

using namespace std;

int main() {
    BazaDanych db("mysql://127.0.0.1:3306");
    Raport mojRaport("Analiza Sprzedazy 2026");

    mojRaport.dodajSekcje("Wstep");
    mojRaport.dodajSekcje("Wyniki Finansowe");
    mojRaport.dodajSekcje("Wnioski");

    mojRaport.wyswietl(db);

    return 0;
}
