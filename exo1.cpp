#include <iostream>

int longueur(const char  *chaine) {
    int i ;

    for ( i = 0; chaine[i] != 0; i++)
    {   
    } 

    return i;
}

int main() {

    const char *chaine1 = "teuguia";
    const char *chaine2 = "etlesdevoir" ;

    std::cout << "la longueur est:"  << longueur(chaine1) << std::endl;
    std::cout << "la longueur est:"  << longueur(chaine2) << std::endl;

    return 0;
 }