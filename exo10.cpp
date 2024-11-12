#include <iostream>

void supprime_caractere(std::string &chaine, char caractere) {
    std::string resultat;
    
    for (char c : chaine) {
        if (c != caractere) {
            resultat += c; 
        }
    }
    chaine = resultat; 
}

int main() {
    std::string chaine = "teuguai, je donne trop les devoir.";
    char caractere = 'e';

    std::cout << "mot avant: " << chaine << std::endl;
    supprime_caractere(chaine, caractere);
    std::cout << "mot apres: " << chaine << std::endl;

    return 0;
}