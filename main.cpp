#include "Grille.cpp"
#include "Tictactoe.cpp"
#include "Puissance_4.cpp"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

    bool partiegagnee = false;
    // Tictactoe jeu = Tictactoe();
    int numeroCase;

    Puissance_4 grille_puissance_12 = Puissance_4();
    while (true){
        grille_puissance_12.afficheGrille();
        cin >> numeroCase;
        grille_puissance_12.ajouteSymbole(numeroCase, numeroCase);
        grille_puissance_12.finTour();
    }

    /*
    while(!partiegagnee && !jeu.testeJeuNul()){
        
        jeu.afficheGrille();
        std::cin >> numeroCase;
        jeu.ajouteSymbole(numeroCase%3,numeroCase/3);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale();
        jeu.finTour();
    }
    */
    
    
    return 0;
}