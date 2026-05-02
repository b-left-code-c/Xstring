#include <stdio.h>
#include "xstring.h"

int main(void)
{
    {
        char chaine[] = "Bonjour";
        printf("%d\n", xstrlen(chaine));
    }

    {
        char chaine[] = "Bonjour";
        xstrcpy(chaine, "Bye !");
        printf("%s\n", chaine);
    }

    {
        char chaine[25] = "Bonjour";
        xstrcat(chaine, " le monde");
        printf("%s\n", chaine); 
    }

    {
        char chaine[] = "Bonjour";
        printf("%d\n", xstrcmp(chaine, "Bonsoir"));
    }

    {
        char chaine[] = "Bonjour";
        printf("%p\n", xstrchr(chaine, 'j'));
    }

    {
        char chaine[] = "Bonjour";
        printf("%p\n", xstrpbrk(chaine, "Bonsoir"));
    }

    return 0;
}