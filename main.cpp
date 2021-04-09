#include "Grille.cpp"
#include "Tictactoe.cpp"
#include "Puissance_4.cpp"
#include "JeuGrille.h"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// +--+-+-+-+-+-+-+-+---+
// |  |0|1|2|3|4|5|6|   |
// ||7|8|9|10|11|12|13| |
// |14|15|16|17|18|19|20|
// |21|22|23|24|25|26|27|
// |28|29|30|31|32|33|34|
// |35|36|37|38|39|40|41|
// +--+--+--+--+--+--+--+

int main(){

    bool partiegagnee = false;
    int numeroCase;
    bool choixIsDone = false;
    string choixJoueur;
    JeuGrille * monJeu;

    while (choixIsDone == false){
        cout << "Entrez le choix de votre jeu \"TicTacToe\" ou \"Puissance_4\"" << endl;
        cin >> choixJoueur;
        if(choixJoueur == "TicTacToe" || choixJoueur == "tictactoe" || choixJoueur == "ticTacToe" || choixJoueur == "TictacToe" || choixJoueur == "TicTactoe"){
            monJeu = new Tictactoe();
            choixIsDone = true;
        } else if(choixJoueur == "Puissance_4" || choixJoueur == "puissance_4" || choixJoueur == "Puissance4" || choixJoueur == "puissance4" || choixJoueur == "puiss4" ||
        choixJoueur == "puiss_4" || choixJoueur == "Puiss4" || choixJoueur == "Puiss_4"){
            monJeu = new Puissance_4();
            choixIsDone = true;
        } else{
            cout << "Ce choix n'existe pas, veuillez ressayer" << endl;
        }
    }

    // Puissance_4 grille_puissance_12 = Puissance_4();
    // grille_puissance_12.afficheGrille();
    // while(partiegagnee != true && !grille_puissance_12.testeJeuNul()){
    //     cin >> numeroCase;
    //     grille_puissance_12.ajouteSymbole(numeroCase, numeroCase);
    //     grille_puissance_12.finTour();
    //     grille_puissance_12.afficheGrille();
    //     partiegagnee = grille_puissance_12.testeVictoireVerticale() || grille_puissance_12.testeVictoireHorizontale() || grille_puissance_12.testeVictoireDiagonale();
    // }
    // if(partiegagnee == true){cout << "Victoire du joueur " << grille_puissance_12.getSymboleCourant() << " !";}
    // else{cout << "Personne ne gagne";}

    while(!partiegagnee && !monJeu->testeJeuNul()){
        
        monJeu->afficheGrille();
        std::cin >> numeroCase;
        monJeu->ajouteSymbole(numeroCase%3,numeroCase/3);
        partiegagnee = monJeu->testeVictoireDiagonale() || monJeu->testeVictoireHorizontale() || monJeu->testeVictoireVerticale();
        monJeu->finTour();
    }
    monJeu->afficheGrille();
    if(partiegagnee == true){
        cout << "Victoire du joueur ", monJeu->getSymboleCourant();
    } else {cout << "Match nul";}
    
    return 0;
}