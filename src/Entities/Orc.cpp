#include "Entities/Orc.hpp"
#include "Entities/Personnage.hpp"
#include "Core/icones.hpp"
#include <iostream>
                    //race    vm frc gld volable
Orc::Orc() : Ennemi("Orc", 60, 23, 12, true) {}

void Orc::attaquer(Personnage* hero){
    hero->recevoirDegats(force);
}

void Orc::afficher() {
    std::cout << Icone::ORC;
}