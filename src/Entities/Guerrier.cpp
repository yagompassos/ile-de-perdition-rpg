#include "Entities/Guerrier.hpp"
#include "Entities/Ennemi.hpp"

//                              vm frc dex cha gld sizeInventory
Guerrier::Guerrier() : Personnage(30, 28, 3, 8, 3, 4) {}

void Guerrier::attaqueBasique(Ennemi* e) {
    e->recevoirDegats(7);
}