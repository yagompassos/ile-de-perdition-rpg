#ifndef MARCHAND_H
#define MARCHAND_H

#include "Items/TypeObjet.hpp"

class Personnage;

// Si le marchand a le prix des objets et si c'est lui qui decide les prix, il faut enlever le prix sur les sous-classes des objets
class Marchand {
    private:
        int prixPotion = 2;
        int prixBouclier = 7;
        int prixEpee = 6;
        int prixParchemin = 6;
    public:
    int getPrixPotion();
        Marchand();
        virtual ~Marchand();
        bool vendrePotion(Personnage* hero);
        bool vendre(TypeObjet type, Personnage* hero);
        bool vendre(int op, Personnage* hero);

        void afficher();
};

#endif