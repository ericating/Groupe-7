#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"

void quickSort_pouls(Infos infos, int debut, int fin, int MAXI)
 {
int tableau[MAXI];
for(int i=0;i<MAXI;i++)
{
    tableau[i]=infos[i].pouls;
}

     int tmp;
     int tmt;

int gauche = debut-1;
int droite = fin+1;
const int pivot = tableau[debut];


   if(debut >= fin)
    return;
      while(1)
    {
    do droite--;
while(tableau[droite] > pivot);
do gauche++;
while(tableau[gauche] < pivot);
if(gauche < droite) {
tmp=tableau[gauche];
tmt=infos[gauche].tmp;

tableau[gauche]=tableau[droite];
infos[gauche].tmp=infos[droite].tmp;

tableau[droite]= tmp;
infos[droite].tmp= tmt;
}
else break;
 }

 for(int i=0;i<MAXI;i++)
{
    infos[i].pouls=tableau[i];//remise des éléments dans le tableau infos
}

quickSort_pouls(infos, debut, droite, MAXI);
 quickSort_pouls(infos, droite+1, fin,MAXI);
  }



void quickSort_temps(Infos infos, int debut, int fin, int MAXI)
 {
int tableau[MAXI];
for(int i=0;i<MAXI;i++)
{
    tableau[i]=infos[i].tmp;
}

     int tmp;
     int tmt;

int gauche = debut-1;
int droite = fin+1;
const int pivot = tableau[debut];


   if(debut >= fin)
    return;
      while(1)
    {
    do droite--;
while(tableau[droite] > pivot);
do gauche++;
while(tableau[gauche] < pivot);
if(gauche < droite) {
tmp=tableau[gauche];
tmt=infos[gauche].pouls;

tableau[gauche]=tableau[droite];
infos[gauche].pouls=infos[droite].pouls;

tableau[droite]= tmp;
infos[droite].pouls= tmt;
}
else break;
 }

 for(int i=0;i<MAXI;i++)
{
    infos[i].tmp=tableau[i];
}

quickSort_temps(infos, debut, droite,MAXI);
 quickSort_temps(infos, droite+1, fin,MAXI);
  }



void Afficher_fichier(Infos infos)
{
    printf("\n");
  for(int i=0;i<MAX;i++)
  {
      if(infos[i].pouls!=0)
      printf("%d %s %d\n",infos[i].pouls,infos[i].pv,infos[i].tmp);
 //Ecrire les valeurs contenues dans le fichier

  }

}


void Afficher_par_ordre(Infos infos,int MAXI,int choix1)
{
    if(choix1==1)
    {
    printf("\nORDRE CROISSANT SELON LE TEMPS\n");
    quickSort_temps(infos,0,MAXI-1,MAXI);
    //tri des elements selon le temps(ordre croissant)

    for(int i=0;i<MAXI;i++)
  {
      printf("%d %s %d\n",infos[i].pouls,infos[i].pv,infos[i].tmp);
  }

   printf("\nORDRE CROISSANT SELON LE POULS\n");
    quickSort_pouls(infos,0,MAXI-1,MAXI);
    //tri des elements selon le pouls(ordre croissant)
    for(int i=0;i<MAXI;i++)
  {
      printf("%d %s %d\n",infos[i].pouls,infos[i].pv,infos[i].tmp);
  }
    }
    else if(choix1==2)
    {
   printf("\nORDRE DECROISSANT SELON LE TEMPS\n");
    quickSort_temps(infos,0,MAXI-1,MAXI);
    //tri des elements selon le temps(ordre decroissant)

    for(int i=MAXI-1;i>=0;i--)
  {
      printf("%d %s %d\n",infos[i].pouls,infos[i].pv,infos[i].tmp);
  }

   printf("\nORDRE DECROISSANT SELON LE POULS\n");
    quickSort_pouls(infos,0,MAXI-1,MAXI);
    //tri des elements selon le pouls(ordre decroissant)

    for(int i=MAXI-1;i>=0;i--)
  {
      printf("%d %d\n",infos[i].pouls,/*infos[i].pv,*/infos[i].tmp);
  }
    }

}


int nombre_lignes(Infos infos,int MAXI)
{
printf("votre fichier a %d lignes\n\n",MAXI);

}


void Affichage_max_min_pouls(Infos infos, int MAXI)
{
quickSort_pouls(infos,0,MAXI-1,MAXI);// le tri du tableau permettra de reperer plus facilement le max et le min
printf("La valeur maximale du pouls est %d detectee apres %d ms:\n",infos[MAXI-1].pouls,infos[MAXI-1].tmp);
printf("La valeur minimale du pouls est %d detectee apres %d ms:\n",infos[0].pouls,infos[0].tmp);
}


void moyenne_pouls_plage_temps(Infos infos,int MAXI)
{

    int a,b;// a contient la la valeur de départ et b la valeur de fin
    quickSort_temps(infos,0,MAXI-1,MAXI);
    printf("\nEntrez votre plage de temps. N'oubliez pas de saisir la plus petite valeur d'abord\n");
    scanf("%d %d",&a,&b);

    if(a<b && a>=infos[0].tmp && b<=infos[MAXI-1].tmp)
    {
        int deb=0,fin=0,i=0,j=0,s=0;
      while(i<MAXI && deb==0)
      {
          if((a-infos[i].tmp)>0)
          {}
          else
          {
               deb=i;
          }
           i++;
      }
        while(j<MAXI && fin==0)
      {
          if((b-infos[j].tmp)>=0)
          {}
          else
          {
               fin=j-1;
          }
           j++;
      }

      for(int k=deb;k<=fin;k++)
        s+=infos[k].pouls;

   double d=(double)s/(double)(fin-deb+1);
    printf("La moyenne de pouls dans cet intervalle est: %f\n\n",d);

    }

    else if(a>b)
    {
        printf("Rappelez-vous!!! le premier nombre est inferieur au second. Vous allez devoir recommencer\n");
    }
}

void Rechercher_afficher_donnees(Infos infos, int MAXI)
{

int VAL;
 int POS;
 int INF, MIL, SUP;
quickSort_temps(infos,0,MAXI-1,MAXI);
 printf("Temps a rechercher : ");
 scanf("%d",&VAL);


 INF=0;
 SUP=MAXI-1;
 POS=-1;
 while (INF<=SUP && POS==-1)
        {
         MIL=(SUP+INF)/2;
         if (VAL < infos[MIL].tmp)
               SUP=MIL-1;
         else if (VAL > infos[MIL].tmp)
               INF=MIL+1;
         else
               POS=MIL;
}

if(POS==-1)
    printf("Cette valeur ne se retrouve pas dans le fichier\n\n");
else
printf("Le pouls correspondant au temps %d est %d\n\n",infos[POS].tmp,infos[POS].pouls);
}
