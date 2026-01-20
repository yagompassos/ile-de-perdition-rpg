#include "Items/PotionSoin.hpp"
#include "Entities/Personnage.hpp"
#include "Core/icones.hpp"
#include <iostream>

PotionSoin::PotionSoin() : Objet("Potion de Soin"){}

void PotionSoin::utiliser(Personnage* hero) {
    hero->curer(20);
}

std::string PotionSoin::getEmoji() const {
    return Icone::POTION;
}