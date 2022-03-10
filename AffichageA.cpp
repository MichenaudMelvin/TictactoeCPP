#ifndef AFFICHAGEA_CPP
#define AFFICHAGEA_CPP

#include <iostream>
#include "AffichageA.h"

    std::string AffichageA::execute(int lignes, int colonnes, Grille grille){
        for(int j = 0; j < lignes; j++){
            for(int i = 0; i < colonnes; i++){
                std::cout << grille.getContent(i, j);
                if(i != colonnes - 1)  std::cout << " | ";
            }
            std::cout << std::endl;
            if(j != lignes - 1)  std::cout << " ----- "<< std::endl;
        }
    }

#endif