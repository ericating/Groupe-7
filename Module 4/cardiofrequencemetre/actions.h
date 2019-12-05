#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED
#include "donnees.h"
void Afficher_fichier(Infos infos);
void quickSort_temps(Infos infos, int debut, int fin, int MAXI);
void quickSort_pouls(Infos infos, int debut, int fin, int MAXI);
void Afficher_par_ordre(Infos infos,int MAXI,int choix1);
int nombre_lignes(Infos infos,int MAXI);
void Affichage_max_min_pouls(Infos infos,int MAXI);
void moyenne_pouls_plage_temps(Infos infos,int MAXI);
void Rechercher_afficher_donnees(Infos infos, int MAXI);


#endif // ACTIONS_H_INCLUDED
