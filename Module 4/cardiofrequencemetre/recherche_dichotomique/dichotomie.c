#include <stdio.h>
#include <stdlib.h>

void recherhce_dichotomique(int A[],int N){

 int VAL;
 int POS;

 int i;
 int INF, MIL, SUP;
for (i=0; i<N; i++)
    {
     printf("Element %d : ", i);
     scanf("%d", &A[i]);
    }
 printf("Element a rechercher : ");
 scanf("%d", &VAL );
 printf("Tableau donne : \n");
 for (i=0; i<N; i++)
    printf("%d ", A[i]);
 printf("\n");

 INF=0;
 SUP=N-1;
 POS=-1;
 while ((INF<=SUP) && (POS==-1))
        {
         MIL=(SUP+INF)/2;
         if (VAL < A[MIL])
               SUP=MIL-1;
         else if (VAL > A[MIL])
               INF=MIL+1;
         else
               POS=MIL;
        }

 if (POS==-1)
     printf("La valeur recherchee ne se trouve pas dans le tableau.\n");
 else
     printf("La valeur %d se trouve a la position %d. \n",VAL, POS);
}
