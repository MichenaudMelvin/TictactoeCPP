#ifndef Start2_H
#define Start2_H

#include "InterfaceStrategie.h"
#include <string>

class Strat2 : public InterfaceStrategie{
    public:
        Strat2();
        std::string execute();
};

#endif