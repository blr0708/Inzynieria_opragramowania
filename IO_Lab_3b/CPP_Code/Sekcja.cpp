#include "Sekcja.h"
#include <iostream>

void Sekcja::aktualizujDane(BazaDanych& b) {
    std::cout << "Sekcja [" << nazwa << "] pobiera dane przez: ";
    b.polacz();
}
