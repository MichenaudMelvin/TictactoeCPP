#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>

using namespace std;
int main(){
    bool partiegagnee = false;
    Tictactoe jeu = Tictactoe();
    int numeroCase;
    while(partiegagnee != true && jeu.testeJeuNul() == false){
        jeu.finTour();
        jeu.afficheGrille();
        cin >> numeroCase;
        jeu.ajouteSymbole(numeroCase%3,numeroCase/3);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale();
    }
    
    jeu.afficheGrille();
    if(jeu.testeVictoireDiagonale() == true || jeu.testeVictoireHorizontale() == true || jeu.testeVictoireVerticale() == true){
        cout << "Le joueur " << jeu.getSymboleCourant() << " a gagné !" << endl;
    } else {cout << "Personne ne gagne.";}
}