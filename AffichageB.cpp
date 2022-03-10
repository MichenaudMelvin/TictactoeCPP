#ifndef AFFICHAGEB_CPP
#define AFFICHAGEB_CPP

#include <iostream>
#include "AffichageB.h"

    std::string AffichageB::execute(int lignes, int colonnes, Grille grille){
        for(int j = 0; j < lignes; j++){
            for(int i = 0; i < colonnes; i++){
                std::cout << grille.getContent(i, j);
                if(i != colonnes - 1)  std::cout << " - ";
            }
            std::cout << std::endl;
            if(j != lignes - 1)  std::cout << " ||||| "<< std::endl;
        }
    }

#endif