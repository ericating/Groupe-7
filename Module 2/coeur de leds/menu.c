/*#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


const int L1=1;
const int L2=2;
const int L3=3;
const int L4=4;
const int L5=5;
const int L6=6;
const int L7=7;
const int L8=8;
const int L9=9;
const int L10=10;
int pinled[10];
/*int l=1;
int j=1;
int f=1;
int g=0;*/

/*int a;

void menu(){
  printf("Veuillez choisir le mode d'allumage des LEDS\n");
   printf("1-Allumer toutes les LEDS, 2-Allumer une LEDS sur 2, 3-Allumer une LEDS sur 3, 4-Allumer en chenille les LEDS\n");
   scanf("%d",&a);
 switch(a) {
  case 1:
   allum_toutesLEDS ();
  break;
  case 2:
   allum_1LED_sur_2();
  break;
  case 3:
   allum_1LED_sur_3 ();
  break;
  case 4:
   allum_chenille ();
  break;
  default:
   printf("Veuillez choisir un menu disponible");
  }
}*/



#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
//#include "menu.c"

//fonction menu
void affichermenu()
{
printf(" 1-Toutes les LED allumees\n 2-allumage en chenille\n 3-allumage d'une LED sur deux\n 4-une LED sur tois\n 5-une LED au choix\n 6-allumage enchenille_update");
    int choix;
    scanf("%d", &choix);

    switch(choix)
    {

case 1:
    printf("televersez le programme");
    system("start Toutes_les_leds_allumees\\Toutes_Les_Leds_allumees.ino");
    break;

case 2:
    printf("televersez le programme");
    system("start Allumage_en_chenille\\Allumage_en_chenille.ino");
    break;

case 3:
printf("televersez le programme");
    system("start allumage_1_sur_2\\allumage_1_sur_2.ino");
    break;

case 4:
    printf("televersez le programme");
    system("start allumage_1_sur_3\\Allumage_1_sur_3.ino");
    break;

case 5:
    printf("televersez le programme");
    system("start 1_seule_au_choix\\1_seule_au_choix.ino");
    break;

case 6 :
    printf("televersez le programme");
    system("start Allumage_en_chenille_update\\Allumage_en_chenille_update.ino");
    break;
default:
    printf("Nous ne connaissons pas votre choix");
    }

}
