#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


Tictactoe::Tictactoe(): symboleCourant('O'){}

void Tictactoe::afficheGrille(){grilleDeJeu.affiche();}

void Tictactoe::ajouteSymbole(int x, int y){grilleDeJeu.setContent(x, y, symboleCourant);}

bool Tictactoe::testeVictoireVerticale(){
    return false;
}

bool Tictactoe::testeVictoireHorizontale(){
    for(int i=0;i<3;i++){
        if(grilleDeJeu.getContent(i, i) == grilleDeJeu.getContent(i+1, i) && grilleDeJeu.getContent(i, i) == grilleDeJeu.getContent(+2, i)){return true;}
    }
}

bool Tictactoe::testeVictoireDiagonale(){

    return false;
}

bool Tictactoe::testeJeuNul(){
    if(numeroTour >= 9){
        return true;
    } else{
        return false;
    }
}

void Tictactoe::finTour(){
    numeroTour = numeroTour+1;
    std::cout << "Tour n°" << numeroTour << std::endl;
    if(symboleCourant == 'X'){
        symboleCourant = 'O';
    } else if (symboleCourant == 'O'){
        symboleCourant = 'X';
    }
}

char Tictactoe::getSymboleCourant(){return symboleCourant;}

#endif