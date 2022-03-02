#ifndef AFFICHAGE_CPP
#define AFFICHAGE_CPP

#include "Affichage.h"

    std::string Affichage::getSeparationVerticale(){return _separationVerticale;}

    void Affichage::setSeparationVerticale(std::string newSep){
        _separationVerticale = newSep;
    }

    std::string Affichage::getSeparationHorizontale(){return _separationHorizontale;}

    void Affichage::setSeparationHorizontale(std::string newSep){
        _separationHorizontale = newSep;
    }


#endif