#ifndef JEUGRILLE_
#define JEUGRILLE_

#include "Grille.h"
#include <string>

class JeuGrille{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;
        int _nombreColonne;
        int _nombreLigne;

    public:
        JeuGrille(){}
        virtual void afficheGrille(){}
        virtual void ajouteSymbole(int x, int y){}
        virtual bool testeVictoireVerticale(){}
        virtual bool testeVictoireHorizontale(){}
        virtual bool testeVictoireDiagonale(){}
        virtual bool testeJeuNul(){}
        virtual char getSymboleCourant(){}

        virtual void finTour(){}

};

#endif