#ifndef PUISSANCE_4_H
#define PUISSANCE_4_H

#include "Grille.h"
#include <string>

class Puissance_4{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;
        int _nombreColonne;
        int _nombreLigne;

    public:
        Puissance_4();
        void afficheGrille();
        void ajouteSymbole(int x, int y);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();

};

#endif