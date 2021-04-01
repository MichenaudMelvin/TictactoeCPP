#include "Grille.cpp"
#include "Tictactoe.cpp"
#include "Puissance_4.cpp"
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
    // Tictactoe jeu = Tictactoe();
    int numeroCase;
    // class JeuGrille(){
    //     virtual
    // }
    // JeuGrille monJeu;
    // if(monJeu == Puissance_4){

    // }
    // else if(monJeu == Tictactoe){

    // }

    cout << partiegagnee << endl;

    Puissance_4 grille_puissance_12 = Puissance_4();
    while(partiegagnee != true){
        grille_puissance_12.afficheGrille();
        cin >> numeroCase;
        grille_puissance_12.ajouteSymbole(numeroCase, numeroCase);
        grille_puissance_12.finTour();
        // cout << grille_puissance_12.testeJeuNul() << endl;
        partiegagnee = grille_puissance_12.testeVictoireVerticale();
        cout << partiegagnee << endl;
    }
    grille_puissance_12.afficheGrille();
    grille_puissance_12.afficheGrille();

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