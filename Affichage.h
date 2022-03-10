#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <string>

class Affichage{
    private:
        std::string _separationVerticale;
        std::string _separationHorizontale;
    
    public:
        std::string getSeparationVerticale();
        void setSeparationVerticale(std::string newSep);

        std::string getSeparationHorizontale();
        void setSeparationHorizontale(std::string newSep);
};

#endif