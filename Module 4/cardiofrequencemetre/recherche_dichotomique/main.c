#include <stdio.h>
#include <stdlib.h>
int A[50];
int N;

int main()
{
    printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 recherhce_dichotomique(A,N);

 return 0;
}
