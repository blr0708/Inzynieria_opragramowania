#include "Ebiblioteka.h"
#include <iostream>

void Ebiblioteka::dodaj(Ebook* e) {
    zasoby.push_back(e);
}

void Ebiblioteka::pokazWszystko() {
    std::cout << "Biblioteka IP: " << IPadres << std::endl;
    for(auto e : zasoby) {
        e->wyswietl();
    }
}
