#include <iostream>


int longueur(const char* chaine) {  
    int i;  
    for (i = 0; chaine[i] != 0; i++) {  
    
    }  
    return i;  
}


void inverse(char *chaine) {
    int len = longueur(chaine); 
    for (int i = 0; i < len / 2; i++) {
        char change = chaine[i];
        chaine[i] = chaine[len - 1 - i];
        chaine[len - 1 - i] = change;
    }
}


int main() {
    char chaine1[] = "teuguia";
    char chaine2[] = "aime trop les devoir";
    char chaine3[] = "je suis fatigue";

    std::cout << "Voici l'original du texte : " << chaine1 << " et inversée est : " << std::endl;
    inverse(chaine1);
    std::cout << chaine1 << std::endl;

    std::cout << "Voici l'original du texte : " << chaine2 << " et inversée est : ";
    inverse(chaine2);
    std::cout << chaine2 << std::endl;

    std::cout << "Voici l'original du texte : " << chaine3 << " et inversée est : ";
    inverse(chaine3);
    std::cout << chaine3 << std::endl;

    return 0;
}