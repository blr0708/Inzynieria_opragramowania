#ifndef POJAZD_H
#define POJAZD_H

#include <string>
#include <iostream>
using namespace std;

class Pojazd {
protected:
    string marka;
public:
    Pojazd(string m) : marka(m) {}
    virtual ~Pojazd() {}
    virtual void jedz();
};

#endif
