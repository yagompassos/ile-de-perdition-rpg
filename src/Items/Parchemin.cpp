#include "Items/Parchemin.hpp"
#include "Core/icones.hpp"
#include "Entities/Personnage.hpp"

Parchemin::Parchemin() : Objet("Parchemin") {}

void Parchemin::utiliser(Personnage* hero) {
    int pwr = hero->getPouvoir();
    hero->setPouvoir(pwr+20);
}

std::string Parchemin::getEmoji() const {
    return Icone::PARCHE;
}