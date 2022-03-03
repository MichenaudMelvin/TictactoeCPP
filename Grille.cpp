#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include "Strat1.cpp"
#include "Strat2.cpp"
#include "InterfaceStrategie.cpp"
#include <iostream>

    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) {
        _tableau = std::vector<char>(9,' ');
        selectStrat();
        resetContent();
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

        // if(_affichage.getSeparationVerticale() == "" && _affichage.getSeparationHorizontale() == ""){
        //     std::string sepVer;
        //     std::string sepHori;

        //     std::cin >> sepVer;
        //     _affichage.setSeparationVerticale(sepVer);

        //     std::cin >> sepHori;
        //     _affichage.setSeparationHorizontale(sepHori);
        // }

        for(int j=0;j<_nombreLignes;j++){
            for(int i=0;i<_nombreColonnes;i++){
                std::cout << this->getContent(i,j);
                if(i!=_nombreColonnes-1)  std::cout << _affichage.execute("Verti");
            }
            std::cout << std::endl;
            if(j!=_nombreLignes-1)  std::cout << _affichage.execute("Hori") << std::endl;
        }
    }



    // void Grille::selectStrat(){
    //     std::string strat;
    //     std::cout << "Select Strat (1 ou 2) : ";
    //     std::cin >> strat;

    //     if(strat == "1"){
    //         _affichage = Strat1();
    //     } else if(strat == "2"){
    //         _affichage = Strat2();
    //     }

    //     if(strat != "1" && strat != "2"){
    //         selectStrat();
    //     }
    // }

    void Grille::affiche(){
        this->strategy_->execute();
    }

    void Grille::set_strategy(AffStrategy *strategy){
        delete this->strategy_;
        this->strategy_ = strategy;
    }


    void Grille::resetContent(){for(int i=0;i<_nombreLignes*_nombreColonnes;i++) _tableau[i] = ' ';}


#endif