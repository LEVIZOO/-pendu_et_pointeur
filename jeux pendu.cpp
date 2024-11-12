#include <iostream>  


int longueur(const char* chaine) {  
    int i;  
    for (i = 0; chaine[i] != 0; i++) {  
       
    }  
    return i;  
}  


const char* pendu[] = {  
    "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",    
    "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",    
    "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",    
    "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",    
    "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",   
    "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",  
    "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"   
};  


void afficherMot(const char* mot, const bool* lettresTrouve, int longueur) { 
    for (int i = 0; i < longueur; i++) {  
        if (lettresTrouve[i]) {  
            std::cout << mot[i] << "    ";  
        } else {  
            std::cout << " _ ";  
        }  
    }  
}  


void MIJ(char *chaine) {
    for (int i = 0; chaine[i] != 0; i++) {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - ('a' - 'A'); 
        }
    }
}


int main() {  
    const char* mot = "PROGRAMMATION";  
    int longueurMot = longueur(mot); 
    bool lettresTrouve[20] = { false }; 
    int tentatives = 6; 

    std::cout << "Bienvenue au jeu du Pendu! " << std::endl;   
    std::cout << "Vous devez deviner le mot suivant en utilisant uniquement des lettres MAJUSCULES: " << std::endl;  

    while (tentatives > 0) {  
        std::cout << pendu[6 - tentatives]; 
        afficherMot(mot, lettresTrouve, longueurMot);  
        std::cout << "Tentatives restantes: " << tentatives <<  std::endl;   
        std::cout << "Entrez une lettre (MAJUSCULE): " << std::endl;  
        
        char lettre;  
        std::cin >> lettre;

        
        MIJ(&lettre);

       
        if (lettre < 'A' || lettre > 'Z') {  
            std::cout << "Veuillez entrer une lettre en MAJUSCULE. " << std::endl;   
            continue; 
        }  
        
        bool trouve = false;  

       
        for (int i = 0; i < longueurMot; i++) {  
            if (mot[i] == lettre) {  
                lettresTrouve[i] = true; 
                trouve = true;  
            }  
        }  

        if (!trouve) {  
            tentatives--; 
            std::cout << "Lettre incorrecte! Vous avez perdu une tentative. "  << std::endl;  
        }  

        
        bool motTrouve = true;  
        for (int i = 0; i < longueurMot; i++) {  
            if (!lettresTrouve[i]) {  
                motTrouve = false;  
                break;  
            }  
        }  

        if (motTrouve) {  
            std::cout << "Félicitations! Vous avez deviné le mot: " << mot << std::endl;  
            break;  
        }  
    }  

    if (tentatives == 0) {  
        std::cout << pendu[6];   
        std::cout << "Dommage! Vous avez perdu. Le mot était: " << mot << std::endl ;  
    }  

    return 0;  
}