#ifndef PARCHEMIN_H
#define PARCHEMIN_H

#include "Items/Objet.hpp"

class Personnage;

class Parchemin : public Objet {
public:
    Parchemin();

    void utiliser(Personnage* hero) override;
    std::string getEmoji() const override;
};

#endif