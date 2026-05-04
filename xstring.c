#include <stdio.h>
#include "xstring.h"

int xstrlen(char *chaine) {
    int count_character = 0;
    for(unsigned i = 0; chaine[i] != '\0'; i++) {
        count_character++;
    }
    return count_character;
}

char *xstrcpy(char *chaine_1, char *chaine_2) {
    int i = 0;
    while(chaine_2[i] != '\0') {
        chaine_1[i] = chaine_2[i];
        ++i;
    }
    chaine_1[i] = '\0';
    return chaine_1;
}

char *xstrcat(char *chaine_1, char *chaine_2) {

    int count_character = 0;
    for(unsigned i = 0; chaine_1[i] != '\0'; i++) {
        count_character++;
    }
    unsigned i = 0, j = count_character;

    while(chaine_2[i] != '\0') {
        chaine_1[j] = chaine_2[i];
        i++, j++;
    }

    chaine_1[j] = '\0';
    return chaine_1;
}

int xstrcmp(char *chaine_1, char *chaine_2) {
    int count_character_1 = 0, count_character_2 = 0;

    for(unsigned i = 0; chaine_1[i] != '\0'; i++) {
        count_character_1++;
    }
    for(unsigned i = 0; chaine_2[i] != '\0'; i++) {
        count_character_2++;
    }
    
    if((count_character_1 < count_character_2) || (count_character_1 > count_character_2)) {
        return 1;
    }
    if (count_character_1 == count_character_2) {
        for(unsigned i = 0; chaine_1[i] != '\0' && chaine_2[i] != '\0';  i++) {
            if(chaine_1[i] != chaine_2[i]) 
                return 1;
        }
    }
    return 0;
}

char *xstrchr(char *chaine, char c) {
    int count_character = 0;

    for(unsigned i = 0; chaine[i] != '\0'; i++) {
        count_character++;
    }

    for(unsigned i = 0; chaine[i] != '\0'; i++) {
        if(chaine[i] == c) {
            return &chaine[i];
        }
        if(c == '\0') {
            return &chaine[count_character];
        }
    }
    return NULL;
}

char *xstrpbrk(char *chaine_1, char *chaine_2) {
    for(unsigned i = 0; chaine_1[i] != '\0'; i++) {
        for(unsigned j = 0; chaine_2[j] != '\0'; j++) {
            if(chaine_2[j] == chaine_1[i]) {
                return &chaine_1[i];
            }
        }
    }
    return NULL;
}

    const char *xstrstr(const char *chaine_1, const char *chaine_2) {
    if (chaine_2[0] == '\0')
        return chaine_1;
    int i = 0;
    while(chaine_1[i] != '\0') {
        for(unsigned j = 0; chaine_2[j] != '\0'; ++j) {
            if((chaine_1[i + j] == chaine_2[j])) {
                if(chaine_2[j + 1] == '\0')
                return &chaine_1[i];
                continue;
            }  break;
        }
        ++i;
    }
    return NULL;
}