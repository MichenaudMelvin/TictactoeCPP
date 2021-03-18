#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP
#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>
Tictactoe::Tictactoe(): symboleCourant('O'){}

void Tictactoe::afficheGrille(){grilleDeJeu.affiche();}

void Tictactoe::ajouteSymbole(int x, int y){grilleDeJeu.setContent(x, y, symboleCourant);}

bool Tictactoe::testeVictoireVerticale(){
    for(int i=0;i<3;i++){
        if((grilleDeJeu.getContent(0, i) == grilleDeJeu.getContent(1, i) && (grilleDeJeu.getContent(2, i) == 'X' || grilleDeJeu.getContent(0, i) == 'O')) && (grilleDeJeu.getContent(1, i) == grilleDeJeu.getContent(2, i) && (grilleDeJeu.getContent(1, i) == 'X' || grilleDeJeu.getContent(1, i) == 'O')) && (grilleDeJeu.getContent(0, i) == grilleDeJeu.getContent(2, i) && (grilleDeJeu.getContent(2, i) == 'X' || grilleDeJeu.getContent(2, i) == 'O'))){return true;}
    }
}
        

bool Tictactoe::testeVictoireHorizontale(){
    for(int i=0;i<3;i++){
        if((grilleDeJeu.getContent(i, 0) == grilleDeJeu.getContent(i, 1) && (grilleDeJeu.getContent(i, 0) == 'X' || grilleDeJeu.getContent(i, 0) == 'O')) && (grilleDeJeu.getContent(i, 1) == grilleDeJeu.getContent(i, 2) && (grilleDeJeu.getContent(i, 1) == 'X' || grilleDeJeu.getContent(i, 1) == 'O')) && (grilleDeJeu.getContent(i, 0) == grilleDeJeu.getContent(i, 2) && (grilleDeJeu.getContent(i, 2) == 'X' || grilleDeJeu.getContent(i, 2) == 'O'))){return true;}
    }
}

bool Tictactoe::testeVictoireDiagonale(){
    if(grilleDeJeu.getContent(1, 1) == 'X' || grilleDeJeu.getContent(1, 1) == 'O'){
        if(grilleDeJeu.getContent(1, 1) == 'X'){
            if((grilleDeJeu.getContent(0, 0) == 'X' && grilleDeJeu.getContent(2, 2) == 'X') || (grilleDeJeu.getContent(0, 2) == 'X' && grilleDeJeu.getContent(2, 0) == 'X')){return true;}
        } else if (grilleDeJeu.getContent(1, 1) == 'O'){
            if((grilleDeJeu.getContent(0, 0) == 'O' && grilleDeJeu.getContent(2, 2) == 'O') || (grilleDeJeu.getContent(0, 2) == 'O' && grilleDeJeu.getContent(2, 0) == 'O')){return true;}
            }
        }
}

bool Tictactoe::testeJeuNul(){
    if(numeroTour >= 9){return true;}
    else{return false;}
}

void Tictactoe::finTour(){
    numeroTour++;
    std::cout << "Tour n°" << numeroTour << std::endl;
    symboleCourant == 'X'?symboleCourant = 'O':symboleCourant = 'X';
}

char Tictactoe::getSymboleCourant(){return symboleCourant;}
#endif