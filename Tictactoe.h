#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Grille.h"
#include "JeuGrille.h"
#include "StateIATicTacToe.h"
#include <string>

class Tictactoe : public JeuGrille{

    private:
        Grille _grilleDeJeu;
        StateIATicTacToe *IA;
        int _numeroTour;
        char _symboleCourant;

    public:
        Tictactoe();
        void afficheGrille();
        void ajouteSymbole(int x, int y);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();
        void changeModeAffichage(int numeroStrat);
        void changeIAState();

};

#endif