#ifndef EBOOK_H
#define EBOOK_H

#include <string>
#include <vector>
#include "Rozdzial.h"

class Ebook {
private:
    std::string tytul;
    std::vector<Rozdzial> rozdzialy; // Kompozycja
public:
    Ebook(std::string t) : tytul(t) {}
    void nowyRozdzial(int n);
    void wyswietl();
};

#endif
