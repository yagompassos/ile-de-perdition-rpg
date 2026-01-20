#ifndef ORC_H
#define ORC_H

#include <string>
#include "Entities/Ennemi.hpp"

class Personnage;

class Orc : public Ennemi {
public:
    Orc();
    
    void attaquer(Personnage* hero) override;
    void afficher() override;
};

#endif