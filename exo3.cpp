#include <iostream>
 
void concatene (char *dest ,const char *source)
 while (*source != 0)
 {
    *dest += *source;
 }
int main()
{
    const char *source = "teuguia";
    char  *dest = "devoirs";
    concatene( dest , source)
    std::cout << "le messages est" << *dest << std::endl;
    return 0;
}
