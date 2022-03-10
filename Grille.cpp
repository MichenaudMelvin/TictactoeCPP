#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include "AffichageA.h"
#include "AffichageB.h"
#include <iostream>

class ConcreteStrategyA : public StratAffichage
{
public:
    void execute(std::vector<char> tab, int x, int y) const override{
        for(int j=0;j<y;j++){
            for(int i=0;i<x;i++){
                std::cout << tab[i+(j)*x];
                if(i!=x-1)  std::cout << " | ";
            }
            std::cout << std::endl;
            if(j!=y-1)  std::cout << " ------- " << std::endl;
        }
    }
};
class ConcreteStrategyB : public StratAffichage
{
    void execute(std::vector<char> tab, int x, int y) const override{
        for(int j=0;j<y;j++){
            for(int i=0;i<x;i++){
                std::cout << tab[i+(j)*x];
                if(i!=x-1)  std::cout << " : ";
            }
            std::cout << std::endl;
            if(j!=y-1)  std::cout << " ******* " << std::endl;
        }
    }
};

    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) { 
        _tableau = std::vector<char>(9,' ');
        resetContent(); 
        strategy_= new ConcreteStrategyA();
    }
    
    Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes) {
        _tableau = std::vector<char>(nbColonnes * nbLignes,' ');
    }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ return _tableau[x+(y)*_nombreColonnes]; }    

        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        _tableau[x+(y)*_nombreColonnes] = nouveauContenu;
    }

    void Grille::affiche(){
        this->strategy_->execute(_tableau,_nombreColonnes,_nombreLignes);
    }

    void Grille::selectStrat(){
        std::string strat;
        std::cout << "Select Strat (A ou B) : ";
        std::cin >> strat;
        AffStrategy *strategy;

        if(strat == "A"){
            // *strategy = new AffichageA();
        } else if(strat == "B"){
            // *strategy = new AffichageB();
        }

        if(strat != "A" && strat != "B"){
            selectStrat();
            return;
        }

        this->set_strategy(strategy);
    }

    void Grille::affiche(){
        this->_affichage->execute();
    }

    void Grille::set_strategy(AffStrategy *strategy){
        delete this->_affichage;
        this->_affichage = strategy;
    }


    void Grille::resetContent(){for(int i=0;i<_nombreLignes*_nombreColonnes;i++) _tableau[i] = ' ';}

    void Grille::set_stratAffiche(StratAffichage *strategy){
            delete this->strategy_;
            this->strategy_ = strategy;
        }

#endif