#if !defined(_PIES_H)
#define _PIES_H

#include "Ssak.h"
#include <string>

using namespace std;

class Pies : public Ssak {
public:
    void szczekaj();
private:
    string rasa;
};

#endif
