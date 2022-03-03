#ifndef InterfaceStrategie_CPP
#define InterfaceStrategie_CPP

#include "InterfaceStrategie.h"
#include <iostream>

    std::string InterfaceStrategie::execute(std::string wantedReturn){
        if(wantedReturn == "Verti"){
            return _separationVerticale;
        } else if(wantedReturn == "Hori"){
            return _separationHorizontale;
        } else{
            return "";
        }
    }

#endif