#include "Core/Des.hpp"
#include <random>
#include <stdexcept>
#include <algorithm>

namespace {
    std::mt19937& generateur() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        return gen;
    }
}

int Des::entier(int min, int max) {
    std::uniform_int_distribution<> dist(min, max);
    return dist(generateur());
}

int Des::D4(){ return entier(1,4); }
int Des::D6(){ return entier(1,6); }
int Des::D10(){ return entier(1,10); }
int Des::D20(){ return entier(1,20); }

std::vector<int> Des::entiersDistincts(int min, int max, int quantite) {
    int taille = max - min + 1;
    if (quantite > taille) {
        throw std::invalid_argument("Quantité trop grande pour la plage donnée");
    }

    std::vector<int> valeurs;
    for (int i = min; i <= max; ++i) {
        valeurs.push_back(i);
    }

    std::shuffle(valeurs.begin(), valeurs.end(), generateur());

    valeurs.resize(quantite);
    return valeurs;
}
