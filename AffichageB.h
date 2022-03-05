#ifndef AFFICHAGEB_H
#define AFFICHAGEB_H

#include <string>
#include "Grille.h"
#include "AffStrategy.h"

class AffichageB : public AffStrategy{
    public:
        std::string execute(int lignes, int colonnes, Grille grille){}
};

#endif