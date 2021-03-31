#ifndef PUISSANCE_4_CPP
#define PUISSANCE_4_CPP

#include "Grille.h"
#include "Puissance_4.h"
#include <math.h>
#include <iostream>

    Puissance_4::Puissance_4() : _symboleCourant('X'), _grilleDeJeu(7,6){}

    void Puissance_4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance_4::ajouteSymbole(int x, int y){
        y = (floor (y/7));
        x = x -7 * y;
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Puissance_4::testeVictoireVerticale(){
        return false;
    }

    bool Puissance_4::testeVictoireHorizontale(){
        return false;   
    }

    bool Puissance_4::testeVictoireDiagonale(){

        return false;
    }

    bool Puissance_4::testeJeuNul(){
        return _numeroTour==42;
    }

    void Puissance_4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
    }

#endif