#ifndef MAGE_H
#define MAGE_H

#include "Entities/Personnage.hpp"

class Ennemi;

class Mage : public Personnage {
public:
    Mage();
    void attaqueBasique(Ennemi* e) override;
    void habiliteSpeciale(Ennemi *e) override;
    std::string getEmoji() const override;

};

#endif