#include <iostream>


void MIJ(char *chaine) {
    for (int i = 0; chaine[i] != 0 ; i++) {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - ('a' - 'A');
        }
    }
}


void MAJ(char *chaine) {
    for (int i = 0; chaine[i] != 0 ; i++) {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = chaine[i] + ('a' - 'A'); 
        }
    }
}


int main() {
    
    char chaine1[] = "teuguia";
    char chaine2[] = "";

    std::cout << "Original : " << chaine1 << std::endl;
    MIJ(chaine1);
    std::cout << "En majuscules : " << chaine1 << std::endl;

    std::cout << "Original : " << chaine2 << std::endl;
    MAJ(chaine2);
    std::cout << "En minuscules : " << chaine2 << std::endl;

    return 0;
}