#include <iostream>

void sous_chaine(const char *source, char *dest, int debut, int longueur) {
   
    if (debut < 0) {
        dest[0] = 0; 
        return;
    }

    
    int i = 0;
    while (source[debut + i] != 0 && i < longueur) {
        dest[i] = source[debut + i];
        i++;
    }

    
    dest[i] = 0;
}

int main() {
    const char *source = "teuguia, ecole";
    char dest[20]; 

    sous_chaine(source, dest, 8, 5); 
    std::cout << "chaîne recuperer est : " << dest << std::endl;

    return 0;
}