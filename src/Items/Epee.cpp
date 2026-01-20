#include "Items/Epee.hpp"
#include "Core/icones.hpp"
#include "Entities/Personnage.hpp"

Epee::Epee() : Objet("Epee") {}

void Epee::utiliser(Personnage* hero) {
    int frc = hero->getForce();
    hero->setForce(frc+20);
}

std::string Epee::getEmoji() const {
    return Icone::EPEE;
}