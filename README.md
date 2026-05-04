# Fonctions de l'en-tête <string.h>

Ce répo regourpe la copie fonctions des fonctions :

- **strlen**
- **strcpy**
- **strcat**
- **strcmp**
- **strchr**
- **strpbrk** 
- **xstrstr**

Par convention nous commencerons le nom de nos fonctions par `x`, dans notre cas pour indiquer que ce sont des copies !


> les autres fonctions sont en cours de developpement, si prêtent elle seront ajouter.  Des mises à jour seront faites également sur toutes les fonctions pour atteindre un meilleur code possible .

## Les différentes fonctions et leurs rôles 

Fonctions | Rôles  |
----------|--------|
`xstrlen` | Donne la taille d'une chaine de caractères, caractère nul non compris 
`xstrcpy` | Copie une chaine de caractère d'un tableau source dans un tableau de destination caractère nul compris !
`xstrcat` | Ajoute une chaine de caractère d'un tableau source sur la ou les chaines caractères d'un tableau de destination caractère nul compris !
`xstrcmp` | Compare la taille et les éléments de deux chaines de caractère s'il y correspondance au niveaux des deux points, renvoie 1 sinon 0 . 
`xstrchr` | Vérifie l'existence d'un caractère dans une chaine de caractère si le caractère existe renvoie l'adresse de la première occurence du caractère dans la chaine sinon, renvoie un pointeur nul.
`xstrpbrk`| recherche la présence d’un des caractères de la chaîne_2 dans la chaîne_1. Si un de ceux-ci est rencontré, la fonction retourne l’adresse de la première occurrence au sein de la chaîne_1. Dans le cas contraire, la fonction renvoie un pointeur nul.
`xstrstr` | recherche la présence de la chaine de caractères de la chaîne_2 dans la chaîne_1. Si elle existe, la fonction retourne l’adresse de sa première lettre au sein de la chaîne_1. Dans le cas contraire, la fonction renvoie un pointeur nul.
---


## Comment ça fonctionne ?

**xstrlen** :
```
char chaine[] = "Bonjour";
printf("%d\n", xstrlen(chaine));

output :
7
```

**xstrcpy** :
```
char chaine[] = "Bonjour";
xstrcpy(chaine, "Bye !");
printf("%s\n", chaine);

output :
bye !
```

**xstrcat** :
```
char chaine[25] = "Bonjour";
xstrcat(chaine, " le monde");
printf("%s\n", chaine);

output :
Bonjour le monde
```

**xstrcmp** :
```
char chaine[] = "Bonjour";
printf("%d\n", xstrcmp(chaine, "Bonsoir"));

output :
1
```

**xstrchr** :
```
char chaine[] = "Bonjour";
printf("%p\n", xstrchr(chaine, 'j'));

output :
0xadresse
```

**xstrpbrk** :
```
char chaine[] = "Bonjour";
printf("%p\n", xstrpbrk(chaine, "Bonsoir"));

output :
0xadresse
```

**xstrstr** :
```
char chaine[] = "Bonjour";
printf("%p\n", xstrstr(chaine, "jour"));

output :
0xadresse
```

> **Précision :**  Comme strcpy(), la fonction strcat() n’effectue aucune vérification. Vous devez donc
vous assurer que la chaîne de destination dispose de suffisamment d’espace pour accueillir
la chaîne qui doit être ajoutée (caractère nul compris !)

## Compilation

Il faut d’abord inclure le fichier d’en-tête `xstring.h`, car il contient les déclarations des fonctions. Dans notre cas, `main.c` l’inclut avec la directive du préprocesseur `#include "xstring.h"`. Le fichier `xstring.c` contient, lui, les définitions des fonctions. Lors de la compilation, `main.c` est compilé avec `xstring.c` : le compilateur connaît les fonctions grâce au fichier d’en-tête, puis le linker associe les appels aux définitions.


```bash
gcc *.c -o main
```

*  `*.c` Pour tous les fichiers ayant l'extension .c .

## Utilisation 

```bash
./main
```

## À propos 

Projet réaliser dans le cadre de l'apprentissage du langage C  suivant le cours [Le langage C](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/) sur Zeste du savoir .
