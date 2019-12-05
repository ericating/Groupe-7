#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "menu.h"
#include "actions.h"


int main()
{

    int choix, choix1;;// choix enregistre l'option de menu choisie
    int nbr_val=0;// nbr_val compte le nombre de lignes

    Infos *infos;
    infos=malloc(MAX*sizeof(Infos));//  allocation dynamique d'un esace mémoire assez grand

    char a[100];
  FILE *fichier=NULL;
  fichier=fopen("Battements.txt","r+");

while(fgets(a,100,fichier)!=NULL)// on teste si une ligne n'est pas vide
   {
    nbr_val++;
   }
rewind(fichier);// remets le curseur au debut du fichier

 Read_file(fichier,infos);
  Afficher_menu(&choix);// cette fonction prend en paramètre l'adresse mémoire de choix pour pouvoir modifier sa valeur

  do
  {
      switch(choix)
      {
      case 1:
          Afficher_fichier(infos);//affiche les valeurs dans l'ordre du fichier
        break;

      case 2:

          do{
          printf("\n1-Ordre croissant\n2-Ordre decroissant\n");
          scanf("%d",&choix1);// on choisit l'ordre que l'on veut
        if(choix1!=1 && choix1!=2)//si le choix n'est pas bon, on affiche un message d'erreur
            printf("\nChoisissez 1 ou 2\n");
        }while(choix1!=1 && choix1!=2);

          Afficher_par_ordre(infos, nbr_val,choix1);

        break;

       case 3:
        Rechercher_afficher_donnees(infos,nbr_val);
        break;

        case 4:
        moyenne_pouls_plage_temps(infos,nbr_val);
        break;

        case 5:
          nombre_lignes(infos,nbr_val);
        break;

        case 6:
          Affichage_max_min_pouls(infos,nbr_val);
        break;

        case 7:
    return 0;
        break;

        default:
      printf("\nVeuillez choisir un nombre compris entre 1 et 7\n\n");
         break;

      }
      printf("\n");

       Afficher_menu(&choix);


  }while(choix==1 || choix==2 || choix==3 || choix==4 || choix==5 || choix==6 || choix==7);
fclose(fichier);
}
