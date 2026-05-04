#include <stdio.h>
#include "xstring.h"

int main(void)

{
    
    char chaine[] = "Bonjour";
    printf("%p\n", xstrstr(chaine, "jour"));
    return 0;

}