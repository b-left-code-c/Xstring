#ifndef XSTRING_H
#define XSTRING_H

extern int xstrlen(char *chaine);

extern char *xstrcpy(char *chaine_1, char *chaine_2);

extern char *xstrcat(char *chaine_1, char *chaine_2);

extern int xstrcmp(char *chaine_1, char *chaine_2);

extern char *xstrchr(char *chaine, char c);

extern char *xstrpbrk(char *chaine_1, char *chaine_2);

extern const char *xstrstr(char *chaine_1, char *chaine_2);

#endif