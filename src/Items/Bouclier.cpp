#include "Items/Bouclier.hpp"
#include "Core/icones.hpp"
#include "Entities/Personnage.hpp"

Bouclier::Bouclier() : Objet("Bouclier") {}

void Bouclier::utiliser(Personnage* hero) {
    int vm = hero->getVieMax();
    hero->setVieMax(vm+20);
    hero->curer(20);
}

std::string Bouclier::getEmoji() const {
    return Icone::BOUCLIER;
}