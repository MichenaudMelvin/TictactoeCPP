#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

Grille::Grille(){
    _casesDynamiques = std::vector<char>(9, ' ');
    resetContent();
}

char Grille::getContent(int x, int y){return _casesDynamiques[x+(y)*3];}

void Grille::setContent(int x, int y, char nouveauContenu){_casesDynamiques[x+(y*3)] = nouveauContenu;}

void Grille::affiche(){
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            std::cout << this->getContent(i,j);
            if(i!=3)
                std::cout << " | ";
        } std::cout << std::endl;
        if(j!=3)
        std::cout << " ------- " << std::endl;
    }
}

void Grille::resetContent(){for(int i=0;i<9;i++) _casesDynamiques[i] = (' ');}

//pour tableau dynamiques
Grille::Grille(int x, int y): _nombreColones(x), _nombreLignes(y), _tailleTableau(x * y){
    _casesDynamiques = std::vector<char>(_tailleTableau, ' ');
    resetContentDynamique();
}

char Grille::getContentDynamique(int x, int y){
    return _casesDynamiques[x+y*_nombreColones];
}

void Grille::affichageGrilleDynamique(){
    for(int j=0;j<_nombreLignes;j++){
        for(int i=0;i<_nombreColones;i++){
            std::cout << this->getContentDynamique(i,j);
            if(i!=_nombreLignes-1)
                std::cout << " | ";
        } std::cout << std::endl;
        if(j!=(_nombreColones-1)){
        for(int tailleColonne=0;tailleColonne<_nombreLignes;tailleColonne++){std::cout << "----";}
        std::cout << std::endl;
        }
    }
}

void Grille::resetContentDynamique(){for(int i=0;i<_tailleTableau;i++) _casesDynamiques[i] = (' ');}

#endif