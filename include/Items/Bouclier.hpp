#ifndef BOUCLIER_H
#define BOUCLIER_H

#include "Items/Objet.hpp"

class Personnage;

class Bouclier : public Objet {
public:
    Bouclier();

    void utiliser(Personnage* hero) override;
    std::string getEmoji() const override;
};

#endif