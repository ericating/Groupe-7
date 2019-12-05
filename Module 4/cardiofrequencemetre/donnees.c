#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"+

void Read_file(FILE *fichier,Infos infos)
{
  for(int a=0;a<MAX;a++)
    {
        infos[a].pouls=0;//initialisation
        infos[a].tmp=0;//initialisation
    }

  for(int i=0;i<MAX;i++)
  {
      fscanf(fichier,"%d ; %d", &infos[i].pouls,/* &infos[i].pv,*/ &infos[i].tmp);
      //remplissage de la variable tableau infos avec les valeurs comprises dans le fichier
  }

}
