#ifndef STATEIATICTACTOE_H
#define STATEIATICTACTOE_H

#include "Grille.h"
#include "Tictactoe.h"

// interface
class StateIATicTacToe{
    protected:
        Grille *grille;
        Tictactoe *jeuTicTacToe;
    public:
        virtual void execute() const = 0;
};

// state 1 : jouer au milieu
class StateIATicTacToe_1 : public StateIATicTacToe{
    public:
        void execute() const override{
            if(grille->getContent(1, 1)){
                jeuTicTacToe->ajouteSymbole(1, 1);
            } else{
                jeuTicTacToe->ajouteSymbole(std::rand() % 4, std::rand() % 4);
            }
        }
};

// state 2 : Jouer aléatoirement
class StateIATicTacToe_2 : public StateIATicTacToe{
    public:
        void execute() const override{
            // faire en sorte que la case soit pas déjà prise
            jeuTicTacToe->ajouteSymbole(std::rand() % 4, std::rand() % 4);
        }
};

// state 3 : Empecher de gagner
class StateIATicTacToe_3 : public StateIATicTacToe{
    public:
        void execute() const override{
            jeuTicTacToe->ajouteSymbole(std::rand() % 4, std::rand() % 4);
        }
};

#endif