#ifndef EBIBLIOTEKA_H
#define EBIBLIOTEKA_H

#include <string>
#include <vector>
#include "Ebook.h"

class Ebiblioteka {
private:
    std::string IPadres;
    std::vector<Ebook*> zasoby; // Agregacja (0..*)
public:
    Ebiblioteka(std::string ip) : IPadres(ip) {}
    void dodaj(Ebook* e);
    void pokazWszystko();
};

#endif
