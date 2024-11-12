#include <iostream>  

char* cherche_mot(const char* phrase, const char* mot) {  
    const char *p1;
    const char *p2;  
    
    
    if ( *mot == 0) {  
        return NULL;  
    }  


    for (*phrase = 0; *phrase != 0 ; phrase++) {  
         
        if (*phrase == *mot) {  
            p1 = phrase;  
            p2 = mot;  

            
            while (*p2 != 0 && *p1 == *p2) {  
                p1++;  
                p2++;  
            }  

            
            if (*p2 == 0) {  
                return (char *)phrase;  
            }  
        }  
    }  
    
    return NULL; 
}  

int main() {  
    const char* phrase = "teuguia";  
    const char* mot = "teuguai devoir";  

    char* resultat = cherche_mot(phrase, mot);  

    if (resultat != NULL) {  
        std::cout << "La phrase '" << mot << "' a été trouvé à l'adresse: " << (void*)resultat << std::endl;  
    } else {  
        std::cout << "La phrase '" << mot << "' est perdu ." << std::endl;  
    }  

    return 0;  
}