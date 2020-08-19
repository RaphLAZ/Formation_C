#include <stdio.h>
#include <stdlib.h>
#include "/home/raphael/Documents/Formation_C/TP.C/tp11/jeux.h"
#include "/home/raphael/Documents/Formation_C/TP.C/tp11/outils.h"

int main()
{
    int choix = 0;

    A_PROPOS("TP11- programmation modulaire")

    do
    {
     afficherBibliotheque();

     printf("Que voulez-vous faire? ");
     fflush(stdin);
     scanf("%d", &choix);

     selectionJeu(choix);

    }while(choix != SORTIE);

    return 0;
}
