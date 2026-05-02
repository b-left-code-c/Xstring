#ifndef XSTRING_H
#define XSTRING_H

int xstrlen(char *chaine);

char *xstrcpy(char *chaine_1, char *chaine_2);

char *xstrcat(char *chaine_1, char *chaine_2);

int xstrcmp(char *chaine_1, char *chaine_2);

char *xstrchr(char *chaine, char c);

char *xstrpbrk(char *chaine_1, char *chaine_2);

#endif