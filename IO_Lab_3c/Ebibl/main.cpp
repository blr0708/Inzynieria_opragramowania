#include "../CPP_Code/Ebiblioteka.h"
#include <iostream>

int main() {
    Ebiblioteka biblo("192.168.1.100");

    Ebook* b1 = new Ebook("C++ Podstawy");
    b1->nowyRozdzial(1);
    b1->nowyRozdzial(2);

    biblo.dodaj(b1);
    biblo.pokazWszystko();

    delete b1;
    return 0;
}
