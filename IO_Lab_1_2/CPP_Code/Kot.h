#if !defined(_KOT_H)
#define _KOT_H

#include "Ssak.h"
#include <string>

using namespace std;

class Kot : public Ssak {
public:
    void miaucz();
private:
    string kolorSiersci;
};

#endif
