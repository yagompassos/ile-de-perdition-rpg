#ifndef DES_HPP
#define DES_HPP

#include <vector>

class Des {
public:
    static int entier(int min, int max);
    static int D4();
    static int D6();
    static int D10();
    static int D20();

    static std::vector<int> entiersDistincts(int min, int max, int quantite);
};

#endif
