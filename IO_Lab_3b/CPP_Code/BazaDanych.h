#ifndef BAZADANYCH_H
#define BAZADANYCH_H
#include <string>

class BazaDanych {
    std::string url;
public:
    BazaDanych(std::string u) : url(u) {}
    void polacz();
};
#endif
