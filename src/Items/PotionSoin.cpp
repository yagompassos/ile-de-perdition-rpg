#include "Items/PotionSoin.hpp"
#include "Entities/Personnage.hpp"

PotionSoin::PotionSoin() : Objet("Potion de Soin", 2){}

void PotionSoin::utiliser(Personnage* hero) {
    hero->curer(5);
}