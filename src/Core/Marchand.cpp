#include "Core/Marchand.hpp"
#include "Core/icones.hpp"
#include "Entities/Personnage.hpp"
#include "Items/Objet.hpp"
#include "Items/PotionSoin.hpp"
#include "Items/Bouclier.hpp"
#include "Items/Epee.hpp"
#include "Items/Parchemin.hpp"
#include <iostream>
#include <string>

Marchand::Marchand(){}
Marchand::~Marchand(){}

int Marchand::getPrixPotion(){
    return prixPotion;
};

bool Marchand::vendre(int op, Personnage* hero) {
    Objet *obj = nullptr;
    int prixObjet = 0;

    switch(op) {
           case 1:
            prixObjet = prixPotion;         
            obj = new PotionSoin;
            break;

        case 2:
            prixObjet = prixBouclier;   
            obj = new Bouclier;      
            break;

        case 3:
            prixObjet = prixEpee;
            obj = new Epee;         
            break;
            
        case 4:
            prixObjet = prixParchemin;         
            obj = new Parchemin;
            break;
        
        default:
            break;
        
    }

    if ( !hero->appauvrir(prixObjet) ) 
        return false;
    if ( !hero->ajouterObjet(obj) ) {
        hero->enricher(prixObjet);
        return false;
    }
    return true;
}

void Marchand::afficher() {
        std::cout << std::endl;
    std::cout << "\t\t\t\t=======================" << std::endl;
    std::cout << "\t\t\t\tBienvenue au Marchand!" << std::endl;
    std::cout << std::endl;
    std::cout << "\t\t\t\t\tmenu du jour:" << std::endl;
    std::cout << "\t\t\t\t  Potion de Soin " << Icone::COIN << " " << prixPotion << std::endl;
    std::cout << "\t\t\t\t  Bouclier " << Icone::COIN << " " << prixBouclier << std::endl;
    std::cout << "\t\t\t\t  Epee long " << Icone::COIN << " " << prixEpee << std::endl;
    std::cout << "\t\t\t\t  Parchemin " << Icone::COIN << " " << prixParchemin << std::endl;
    std::cout << std::endl ;
    std::cout << "\t\t\t\tpassez votre commande!" << std::endl;
    std::cout << "\t\t\t\t=======================" << std::endl;
    std::cout << std::endl << std::endl;
}
 
bool Marchand::vendre(TypeObjet type, Personnage* hero) {
    int prixObjet;
    Objet *obj;
    
    switch (type) {
        case TypeObjet::PotionSoin:
            prixObjet = prixPotion;         
            obj = new PotionSoin;
            break;

        case TypeObjet::Bouclier:
            prixObjet = prixBouclier;   
            obj = new Bouclier;      
            break;

        case TypeObjet::Epee:
            prixObjet = prixEpee;
            obj = new Epee;         
            break;
            
        case TypeObjet::Parchemin:
            prixObjet = prixParchemin;         
            obj = new Parchemin;
            break;
        
        default:
            break;
        
    }
    if ( !hero->appauvrir(prixObjet) )
        return false;
    
    hero->ajouterObjet(obj);
    return true;
}    

// deprecated
// bool Marchand::vendrePotion(Personnage* hero){
//     PotionSoin *p = new PotionSoin();
//     if ( !hero->appauvrir(p->getPrix()) )
//         return false;
//     if ( !hero->ajouterObjet(p) ) {
//         hero->enricher(p->getPrix());
//         return false;
//     }
//     return true;
// }