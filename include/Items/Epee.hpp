#ifndef EPEE_H
#define EPEE_H

#include "Items/Objet.hpp"

class Personnage;

class Epee : public Objet {
public:
    Epee();

    void utiliser(Personnage* hero) override;
    std::string getEmoji() const override;
};

#endif