#include "cardio.h"
#include <Arduino.h>
/*int val=0;
long time;
long time1;
const int analogPin = A0;*/

 //#include <Arduino.h>
 void calculpouls() {
 long time;
 while((millis()-time)<10000){//Arrete le programme au bout d'une minute
  int val=0;

long time1;
time1=millis();
//const int analogPin = A0;
 val = analogRead(A0);//
 Serial.print(val);
 Serial.print(" ; ");
 Serial.println(time1);
int valeurPrecedente = 0;
long tempsPrecedent = 0;

  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(A0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) {  // on est dans la zone max
    if (valeurPrecedente <= valeurSeuil) {  // est-ce qu'on vient d'y entrer?
      tempsDetection = millis();



 //Serial.println("Le temps est ");
      if (tempsDetection > (tempsPrecedent + 200)){  
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
 }
