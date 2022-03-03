#ifndef Start1_H
#define Start1_H

#include "InterfaceStrategie.h"
#include <string>

class Strat1 : public InterfaceStrategie{
    public:
        Strat1();
        std::string execute();
};

#endif