#include "cardio.h"
#include <Arduino.h>


 void calculpouls() {
 long time;
 while((millis()-time)<20000){//Arrete le programme au bout de 20 secondes
  int val=0;

long time1;
time1=millis();
//const int analogPin = A0;
 val = analogRead(A0);//
 Serial.print(val); // la valeur de A0 sera affichée à l'écran 
 Serial.print(" ; "); //le point virgule pour séparer le temps 
 Serial.println(time1); //
int valeurPrecedente = 0; // On initialise à 0
long tempsPrecedent = 0; // On initialise à 0

  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(A0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) {  
    if (valeurPrecedente <= valeurSeuil) {  
      tempsDetection = millis();


        if (tempsDetection > (tempsPrecedent + 200)){  
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
 }
