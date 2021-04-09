#ifndef PUISSANCE_4_CPP
#define PUISSANCE_4_CPP

#include "Grille.h"
#include "Puissance_4.h"
#include <math.h>
#include <iostream>

    Puissance_4::Puissance_4() : _symboleCourant('X'), _nombreColonne(7), _nombreLigne(6), _grilleDeJeu(7,6), _numeroTour(0){}

    void Puissance_4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance_4::ajouteSymbole(int x, int y){
        y = (floor (y/7));
        x = x -7 * y;
        if((_grilleDeJeu.setContent(x,y,_symboleCourant) == false)){
            _numeroTour = _numeroTour - 1;
            _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        }
    }

    bool Puissance_4::testeVictoireVerticale(){
        for(int j=0;j<_nombreColonne;j++){
            for(int i=0;i<_nombreLigne;i++){
                if((_grilleDeJeu.getContent(j, i) == 'X' || _grilleDeJeu.getContent(j, i) == 'O') && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j, i+1) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j, i+2) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j, i+3)){
                    return true;
                }
            }
        }
        return false;
    }

    bool Puissance_4::testeVictoireHorizontale(){
        for(int j=0;j<_nombreLigne;j++){
            for(int i=0;i<_nombreColonne;i++){
                if((_grilleDeJeu.getContent(j, i) == 'X' || _grilleDeJeu.getContent(j, i) == 'O') && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+1, i) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+2, i) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+3, i)){
                    return true;
                }
            }
        }
        return false;
    }

    bool Puissance_4::testeVictoireDiagonale(){
        for(int j=0;j<_nombreLigne;j++){
            for(int i=0;i<_nombreColonne;i++){
                if(((_grilleDeJeu.getContent(j, i) == 'X' || _grilleDeJeu.getContent(j, i) == 'O') && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+1, i+1) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+2, i+2) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j+3, i+3))
                || ((_grilleDeJeu.getContent(j, i) == 'X' || _grilleDeJeu.getContent(j, i) == 'O') && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j-1, i+1) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j-2, i+2) && _grilleDeJeu.getContent(j, i) == _grilleDeJeu.getContent(j-3, i+3))){
                    return true;
                }
            }
        }
        return false;
    }

    bool Puissance_4::testeJeuNul(){
        return _numeroTour==42;
    }

    void Puissance_4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour = _numeroTour + 1;
    }

    char Puissance_4::getSymboleCourant(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        return _symboleCourant;
    }

#endif