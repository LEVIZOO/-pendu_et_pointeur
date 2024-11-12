#include <iostream>

int compare ( const char *chaine1 , const char *chaine2)
{
    int i = 0
    for ( i = 0; *chaine1 != 0 && *chaine2 != 0 ; i++)
    {
        if (*chaine1 < *chaine2)
        {
            return "chaine 2 es plus grand"
        }else if (*chaine1 > *chaine2)
            {
                return "chaine 1 es plus grand"
            }   
    }

    if (*chaine1 == 0 && *chaine2== 0)
    {

      return "il sont egaux"

    }
    
}
int main()
{
    const char *chaine1 = "teuguia";
    const char *chaine2 = "devoirs";
     compare( chaine1 ,chaine2 )
    return 0;
}

