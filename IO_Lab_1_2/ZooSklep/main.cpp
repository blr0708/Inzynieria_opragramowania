#include <iostream>
#include "../CPP_Code/Ssak.h"
#include "../CPP_Code/Pies.h"
#include "../CPP_Code/Kot.h"

using namespace std;

int main() {
    Pies mojPies;
    Kot mojKot;

    cout << "--- Testowanie Psa ---" << endl;
    mojPies.jedz();
    mojPies.spij();
    mojPies.szczekaj();

    cout << "\n--- Testowanie Kota ---" << endl;
    mojKot.jedz();
    mojKot.miaucz();

    return 0;
}
