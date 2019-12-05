#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

int menu()
{
    int choix = 0;
    do
    {
        printf("Welcome on this part.\n");
        printf("Please choose the operation has do :\n");
        printf("---- ------------------------------------------------------------\n");
        printf("| 1 |        To display the data in the order of the file        |\n| 2 |          To display the data in increasing order           |\n| 3 |       To display the data in decreasing order              |\n| 4 |      research                                              |\n| 5 |        To display the average of pulse                     |\n| 6 |     To display the number of lines of data currently       |\n| 7 |        to display the max of pulse                         |\n");
        printf("---- ------------------------------------------------------------\n");
        scanf("%d",&choix);
    }while(choix < 1 && choix > 7);
    return choix;
}
