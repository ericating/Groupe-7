#include "param.h"
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
int k=1;
int pinled[10];
boolean f=HIGH;
boolean g=LOW;
/*
  Pour ce programme on utilise des LEDs connectées sur les pins 2,4 et 6
*/

int  pinLed[10] = {2, 3, 4, 5 , 6, 7, 8, 9, 10, 11}; //déclaration et initialisation du tableau
//avec les valeurs des pins

void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }
}

void loop(){
  pulse();
}

void pulse()
{
    #ifdef HAUT_BAS
    Haut_Bas();
    #endif
    
    #ifdef TOUTES_LED_CLIGNOTANTES
    Toutes_LED_Allumees();
    #endif
 
    #ifdef TOUTES_LED_CLIGNOTANTES
    Toutes_LED_Allumees();
    #endif
  
    #ifdef MODE_CHENILLE
    Chenille();
    #endif

    #ifdef LED_1_SUR_2_ALLUMEE
    Une_LED_Sur_Deux();
    #endif
    
  
    #ifdef LED_1_SUR_3_ALLUMEE
    Une_LED_Sur_Trois();
    #endif

    #ifdef LED_1_SUR_4_ALLUMEE
    Une_LED_Sur_Quatre();
    #endif

  
    #ifdef CHOIX_LEDS_A_ALLUMER_1
    choix_leds_a_allumer_1();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_2
    choix_leds_a_allumer_2();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_3
    choix_leds_a_allumer_3();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_4
    choix_leds_a_allumer_4();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_5
    choix_leds_a_allumer_5();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_6
    choix_leds_a_allumer_6();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_7
    choix_leds_a_allumer_7();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_8
    choix_leds_a_allumer_8();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_9
    choix_leds_a_allumer_9();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_10
    choix_leds_a_allumer_10();
    #endif

    
 }

int Toutes_LED_Allumees ()
{
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
  
digitalWrite(L1, f);
digitalWrite(L2, f);
digitalWrite(L3, f);
digitalWrite(L4, f);
digitalWrite(L5, f);
digitalWrite(L6, f);
digitalWrite(L7, f);
digitalWrite(L8, f);
digitalWrite(L9, f);
digitalWrite(L10, f);
// Fais une pause d'une seconde
delay(450);
// Le relancement du programme

digitalWrite(L1, g);
digitalWrite(L2, g);
digitalWrite(L3, g);
digitalWrite(L4, g);
digitalWrite(L5, g);
digitalWrite(L6, g);
digitalWrite(L7, g);
digitalWrite(L8, g);
digitalWrite(L9, g);
digitalWrite(L10, g);
//Fais une pause d'une seconde
delay(450);
}
int Chenille ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
    delay(100);
    digitalWrite(pinLed[i], LOW);    
  }
}


int Une_LED_Sur_Deux ()
{
  for(int i=0; i<10; i++)
  {
    if (i%2==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}

int Une_LED_Sur_Trois ()
{
  for(int i=0; i<10; i++)
  {
    if (i%3==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}
int Haut_Bas ()
{
  digitalWrite(pinLed[4], HIGH);
  digitalWrite(pinLed[6], HIGH);
  delay(100);
  digitalWrite(pinLed[5], HIGH);
  delay(100);
  digitalWrite(pinLed[7], HIGH);
  digitalWrite(pinLed[3], HIGH);
  delay(100);
  digitalWrite(pinLed[8], HIGH);
  digitalWrite(pinLed[2], HIGH);
  delay(100);
  digitalWrite(pinLed[9], HIGH);
  digitalWrite(pinLed[1], HIGH);
  delay(100);
  digitalWrite(pinLed[0], HIGH);
  delay(1000);
  digitalWrite(pinLed[4], LOW);
  digitalWrite(pinLed[6], LOW);
  delay(100);
  digitalWrite(pinLed[5], LOW);
  delay(100);
  digitalWrite(pinLed[7], LOW);
  digitalWrite(pinLed[3], LOW);
  delay(100);
  digitalWrite(pinLed[8], LOW);
  digitalWrite(pinLed[2], LOW);
  delay(100);
  digitalWrite(pinLed[9], LOW);
  digitalWrite(pinLed[1], LOW);
  delay(100);
  digitalWrite(pinLed[0], LOW);
  delay(1000);
}

int choix_leds_a_allumer_1()
{
  digitalWrite(pinLed[0], HIGH);
    delay(100);
    digitalWrite(pinLed[0], LOW);
    delay(100);
}
int choix_leds_a_allumer_2()
{
  digitalWrite(pinLed[1], HIGH);
    delay(100);
    digitalWrite(pinLed[1], LOW);
    delay(100);
}
int choix_leds_a_allumer_3()
{
  digitalWrite(pinLed[2], HIGH);
    delay(100);
    digitalWrite(pinLed[2], LOW);
    delay(100);
}
int choix_leds_a_allumer_4()
{
  digitalWrite(pinLed[3], HIGH);
    delay(100);
    digitalWrite(pinLed[3], LOW);
    delay(100);
}
int choix_leds_a_allumer_5()
{
  digitalWrite(pinLed[4], HIGH);
    delay(100);
    digitalWrite(pinLed[4], LOW);
    delay(100);
}
int choix_leds_a_allumer_6()
{
  digitalWrite(pinLed[5], HIGH);
    delay(100);
    digitalWrite(pinLed[5], LOW);
    delay(100);
}
int choix_leds_a_allumer_7()
{
  digitalWrite(pinLed[6], HIGH);
    delay(100);
    digitalWrite(pinLed[6], LOW);
    delay(100);
}
int choix_leds_a_allumer_8()
{
  digitalWrite(pinLed[7], HIGH);
    delay(100);
    digitalWrite(pinLed[7], LOW);
    delay(100);      
}
int choix_leds_a_allumer_9()
{
  digitalWrite(pinLed[8], HIGH);
    delay(100);
    digitalWrite(pinLed[8], LOW);
    delay(100);
}
int choix_leds_a_allumer_10()
{
  digitalWrite(pinLed[9], HIGH);
    delay(100);
    digitalWrite(pinLed[9], LOW);
    delay(100);
}
int Une_LED_Sur_Quatre ()
{
  for(int i=0; i<10; i++)
  {
    if (i%4==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}
