#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"

void Afficher_menu(int *choix)
{
printf("Choisissez une operation a effectuer\n\n1-Afficher les donnees dans l\'ordre du fichier .csv\n2-Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)\n3-Rechercher et afficher les donnees pour un temps particulier\n4-Afficher la moyenne de pouls dans une plage de temps donnee\n5-Afficher le nombre de lignes de donnees actuellement en memoire\n6-Rechercher et afficher les max/min de pouls (avec le temps associe)\n7-Quitter l\'application\n\nVotre choix: ");
//affichage du menu
scanf("%d",choix);

}
