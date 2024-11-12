#include <iostream>

 void copie ( char *dest , const char *source)  {

    int i;
    
    for (i = 0; *source != 0 ; i++)
    {
        *dest = *source;
        *dest++;
        *source++;
    }

    
 }

int main()
{
   const char *source = "teuguia";
   char dest [10];

    copie(dest , source);

    std::cout << "le test copie est \n"  << dest << std::endl;

    return 0;
}
