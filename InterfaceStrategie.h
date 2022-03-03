#ifndef InterfaceStrategie_H
#define InterfaceStrategie_H

#include <string>

class InterfaceStrategie{
    protected:
        std::string _separationVerticale;
        std::string _separationHorizontale;

    public:
        std::string execute(std::string wantedReturn);
};

#endif