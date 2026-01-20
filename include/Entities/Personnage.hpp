#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <vector>
#include <iostream>

class Ennemi;
class Objet;

/*
vieMax = 0-100;
vie commence en vieMax, se perd avec les degats d'ennemi
force 0-100;
dexterite: 0-100
chance: 0-100%
gold: l'argent, commence a 2 et peut monter au inf
*/

// Abstract
class Personnage {
protected:
    std::string nom;
    int vieMax;
    int vie;
    int force;
    int pouvoir;
    int dexterite;
    int chance;
    int gold;
    bool specialPret;
    std::vector<Objet*> inventaire;

public:
    Personnage();
    Personnage(int vm, int pouv, int forc, int dex, int cha, int gld, int szInv);
    Personnage(std::string nom, int vm, int pouv, int forc, int dex, int cha, int gld, int szInv);
    virtual ~Personnage() = default;

    // getters
    std::vector<int> getAttributes();
    int getVieMax();
    int getVie();
    int getForce();
    int getPouvoir();
    int getDexterite();
    int getChance();
    int getGold();
    bool estSpecialPret();
    std::string getNom();
    
    void setNom (std::string nouveauNom);
    void setVieMax (int nouvelleVieMax);
    void setForce (int nouvelleForce);
    void setPouvoir (int nouveauPouvoir);
    void setSpecialPret(bool special);
    
    // methods
    virtual void attaqueBasique(Ennemi* e);
    virtual void habiliteSpeciale(Ennemi *e);
    virtual std::string getEmoji() const = 0;
    virtual void afficherStats();
    virtual void afficherActionsCombat();

    bool fuir();
    void recevoirDegats(int degat);
    bool estInventaireComplet();
    bool ajouterObjet(Objet* obj);
    int remplacerObjetSurInventaire(Objet* obj);
    void curer(int v);
    void enricher(int g);
    bool appauvrir(int prix);
    void afficherInventaire();
    bool utiliserObjet(int index);
    bool estVivant();
};

#endif