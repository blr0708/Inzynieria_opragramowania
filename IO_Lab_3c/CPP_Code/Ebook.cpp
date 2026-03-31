#include "Ebook.h"
#include <iostream>

void Ebook::nowyRozdzial(int n) {
    rozdzialy.push_back(Rozdzial(n));
}

void Ebook::wyswietl() {
    std::cout << "  Ebook: " << tytul << std::endl;
    for(auto &r : rozdzialy) {
        r.info();
    }
}
