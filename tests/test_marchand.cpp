#include <iostream>
#include <string>
#include <vector>
#include "Entities/Guerrier.hpp"
#include "Items/PotionSoin.hpp"
#include "Core/Marchand.hpp"

int main() {
    int op;

    Personnage *hero = nullptr;
    Marchand m;

    std::cout << "Marais de Perdition" << std::endl;
    std::cout << "Jouer comme:" << std::endl;
    std::cout << "1. Guerrier" << std::endl;
    std::cout << "2. Mage" << std::endl;
    std::cout << "3. Voleur" << std::endl;

    std::cin >> op;
    switch (op) {
        case 1:
            std::cout << "Guerrier!" << std::endl;
            hero = new Guerrier();
            break;
    }

    std::cout << std::endl << std::endl;
    std::cout << "HERO\tgold: "<< hero->getGold() << std::endl;
    std::cout << "Tu veux acheter quoi?" << std::endl;
    std::cout << "1. Potion - $"<< m.getPrixPotion() << std::endl;
    std::cout << "2. Bouclier" << std::endl;
    std::cout << "3. Epee" << std::endl;
    std::cout << "4. Parchemin" << std::endl;
    
    std::cin >> op;
    switch (op){
        case 1:
            m.vendrePotion(hero);
            break;
    }

    hero->afficherInventaire();

    std::cout << std::endl << std::endl;

    std::cout << "HERO\tgold: "<< hero->getGold() << std::endl;
    m.vendrePotion(hero);
    hero->enricher(50);
    std::cout << "on ajout 50 gold" << std::endl;
    std::cout << "HERO\tgold: "<< hero->getGold() << std::endl;
    m.vendrePotion(hero);
    hero->afficherInventaire();
    m.vendrePotion(hero);
    m.vendrePotion(hero);
    hero->afficherInventaire();
    m.vendrePotion(hero);

    return 0;
}