#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "donnee.h"
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

typedef struct Tab1 tab1;
struct Tab1
{
    int tem ;
    int co ;
};
tab1 rept[1000];

typedef struct
{
    int elt;
    struct Temp* suiv;
}Temp;

typedef struct
{
    Temp*  sommet;
}Pile1;

typedef struct
{
    int elt;
    struct Pouls* suiv;
}Pouls;

typedef struct
{
    Pouls*  sommet;
}Pile2;

Pile1 cree_pile1()
{
    Pile1 pile1;
    pile1.sommet = NULL;
    return pile1;
}

Pile2 cree_pile2()
{
    Pile2 pile2;
    pile2.sommet = NULL;
    return pile2;
}

void empilert(Pile1* pile1, int elt)
{
    Temp* temp = (Temp*) malloc(sizeof(Temp));
    temp->elt = elt;
    temp->suiv = pile1->sommet;
    pile1->sommet = temp;
}

void empilerc(Pile2* pile2, int elt)
{
    Pouls* pouls = (Pouls*) malloc(sizeof(Pouls));
    pouls->elt = elt;
    pouls->suiv = pile2->sommet;
    pile2->sommet = pouls;
}

int est_vide1(Pile1 pile1)
{
    return pile1.sommet == NULL;
}

int est_vide2(Pile2 pile2)
{
    return pile2.sommet == NULL;
}

int depilert(Pile1* pile1)
{
    if(est_vide1(*pile1))
    {
        printf("La pile est vide !");
        exit(1);
    }
    int elt = pile1->sommet->elt;
    Temp* tmp = pile1->sommet;

    pile1->sommet = pile1->sommet->suiv;
    free(tmp);
}

int depilerc(Pile2* pile2)
{
    if(est_vide2(*pile2))
    {
        printf("La pile est vide !");
        exit(1);
    }
    int elt = pile2->sommet->elt;
    Pouls* tmp = pile2->sommet;

    pile2->sommet = pile2->sommet->suiv;
    free(tmp);
}


void afficherPilet(Pile1 *pile1)
{
    if (pile1 == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Temp *actuel = pile1->sommet;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->elt);
        actuel = actuel->suiv;
    }

}

void afficherPilec(Pile2 *pile2)
{
    if (pile2 == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Pouls *actuel = pile2->sommet;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->elt);
        actuel = actuel->suiv;
    }

}

int main()
{
	FILE *csv;
	char puffer[30];
	char *ptr1, *ptr2;
	char planet[30];
	int  maxTemp;
	int poul, temps;
	int choix;
	int i = 1, j = 0, b =0;

	csv = fopen("Battements.csv","r");
	Pile1 pile1 = cree_pile1();
	Pile2 pile2 = cree_pile2();
	if (csv == NULL)
	{
		printf("Le fichier est vide");
	}
	else{
		while((fgetc(csv)) != EOF)
		{
		    fscanf(csv,"%d;%d",&temps,&poul);
            empilerc(&pile1, temps);
            empilert(&pile2, poul);
            rept[i].tem = temps;
            rept[i].co = poul;
            i++;
		}
	}

    choix = menu();

    if(choix == 1)
    {
        printf("Temps : \n");
        afficherPilet(&pile2);
        printf("Poul : \n");
        afficherPilec(&pile1);
    }
    if(choix == 2)
    {
        for (int l = 0; l < i; l++) {
            int v = rept[l].tem;
            for ( j = l; ((j > 0) && (rept[j-1].tem > v)); j--) {
                rept[j].tem = rept[j-1].tem;
                b = rept[j].co;
                rept[j].co = rept[j-1].co;
                rept[j-1].co = b;
            }
            rept[j].tem = v;
        }
        for(int l = 0; l < i; l++)
        {
            printf("Poul : %d ",rept[l].tem);
            printf("Temps : %d ",rept[l].co);
            printf("\n");
            printf("\n");
        }
    }
    if(choix == 3)
    {
        for (int l = 0; l < i; l++) {
            int v = rept[l].tem;
            for ( j = l; ((j > 0) && (rept[j-1].tem < v)); j--) {
                rept[j].tem = rept[j-1].tem;
                b = rept[j].co;
                rept[j].co = rept[j-1].co;
                rept[j-1].co = b;
            }
            rept[j].tem = v;
        }
        for(int l = 0; l < i; l++)
        {
            printf("Poul : %d ",rept[l].tem);
            printf("Temps : %d ",rept[l].co);
            printf("\n");
            printf("\n");
        }
    }
    if(choix == 4)
    {
        int nombre = 0, l = 0, a = 0;
        printf("\n                      You chose the part searches\n");
        printf("\n                      To enter the poul to search\n");
        scanf("%d",&nombre);
        for(l = 0; l < i; l++)
        {
            if(nombre == rept[l].co)
            {
                printf("Here is your research\n");
                printf("Poul : %d ",rept[l].tem);
                printf("Temps : %d ",rept[l].co);
                l = 100;
            }
        }
    }
    if(choix == 5)
    {
        int nombre = 0, l = 0, a = 0;
        float moyenne;
        for(l = 0; l < i; l++)
        {
             a = rept[l].co+a;
        }
        moyenne = a/i;
        printf("Your average gave : %f",moyenne);
    }
    if(choix == 6)
    {
        printf("The number of maximal line is : %d",i);
    }

    if(choix == 7)
    {
        for (int l = 0; l < i; l++) {
            int v = rept[l].tem;
            for ( j = l; ((j > 0) && (rept[j-1].tem > v)); j--) {
                rept[j].tem = rept[j-1].tem;
                b = rept[j].co;
                rept[j].co = rept[j-1].co;
                rept[j-1].co = b;
            }
            rept[j].tem = v;
        }
            printf("Max Poul : %d ",rept[i-1].co);
            printf("Max Temps : %d ",rept[i-1].tem);
            printf("Min Poul : %d ",rept[1].co);
            printf("Min Temps : %d ",rept[1].tem);
    }
	fclose(csv);
	return 0;
}

