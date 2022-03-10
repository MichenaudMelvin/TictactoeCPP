#ifndef AFFICHAGEA_H
#define AFFICHAGEA_H

#include <string>
#include "Grille.h"
#include "AffStrategy.h"

class AffichageA : public AffStrategy{
    public:
        std::string execute(int lignes, int colonnes, Grille grille){}
};

#endif