#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

Grille::Grille(){resetContent();}

char Grille::getContent(int x, int y){return _cases[x+(y)*3];}

void Grille::setContent(int x, int y, char nouveauContenu){_cases[x+(y)*3] = nouveauContenu;}

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

void Grille::resetContent(){for(int i=0;i<9;i++) _cases[i] = ' ';}
#endif