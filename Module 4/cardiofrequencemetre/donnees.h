#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED
#define MAX 10000



typedef struct Info Info;
struct Info // creation d'une structure Info pour recuperer les informations
{
    int pouls;
    char pv[1];
    int tmp;
};

typedef struct Info Infos[MAX]; // creation d'un type Infos
void Read_file(FILE *fichier,Infos infos);



#endif // DONNEES_H_INCLUDED
