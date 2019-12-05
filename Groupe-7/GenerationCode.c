#include <stdio.h>
#include "GenerationCode.h"

/**
 * Fonction permettant de créer le param.h
 */
void gen(int x)
{
  FILE *fichier = NULL;
  fichier = fopen("param.h", "w+");
  if (fichier != NULL)
  {
    if (x > 0 && x < 7)
    {
      fprintf(fichier, "#define choixParam %d\n", x);
      fprintf(fichier, "#define pinLed 0");
      fclose(fichier);
    }
    else if (x == 5)
    {
      int y;
      printf("Quelle LED souhaitez-vous allumer ? (1-10)\n");
      scanf("%d", &y);
      fprintf(fichier, "#define choixParam %d\n", x);
      fprintf(fichier, "#define pinLed %d\n", y - 1);
      fclose(fichier);
    }
  }
}
