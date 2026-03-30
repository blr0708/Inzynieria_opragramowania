#include "Raport.h"
#include <iostream>

void Raport::wyswietl(BazaDanych& b) {
    std::cout << "--- RAPORT: " << tytul << " ---" << std::endl;
    for(auto& s : sekcje) {
        s.aktualizujDane(b);
    }
}
