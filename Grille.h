#ifndef GRILLE_H
#define GRILLE_H

class AffStrategy{
public:
    virtual ~AffStrategy() {}
    virtual std::string execute() const = 0;
};

class AffichageA : public AffStrategy{
public:
    std::string execute() const override { /* ici insérez algo affichage A */   }
};

class AffichageB : public AffStrategy{
public:
    std::string execute() const override { /* ici insérez algo affichage B */   }
};

#include <string>
#include "InterfaceStrategie.h"
#include <vector>

class Grille{

    private:

        // on considèrera que les 3 premières cases sur la 1ere ligne : (0,0) (0,1) (0,2)
        // les 3 suivantes sont la 2nde ligne : (1,0) (1,1) (1,2)
        // les 3 suivantes de la 3e ligne : (2,0) (2,1) (2,2)
        std::vector<char> _tableau;
        AffStrategy *strategy_;
        int _nombreColonnes;
        int _nombreLignes;
        
    public:
        char getContent(int x, int y); 
        // renvoie le contenu de la case de coordonnées x,y

        void setContent(int x, int y, char nouveauContenu); 
        // ajoute un contenu dans une case de coordonnées x,y
        // le contenu est un entier non nul

        void resetContent();
        // remet la grille à 0

        void affiche();
        // affiche la grille conformément au système de coordonnées

        void selectStrat();

        void set_strategy(AffStrategy *strategy);

        Grille();
        // initialise la grille avec les cases toutes à 0
        Grille(int nbColonnes, int nbLignes);
};

#endif