#include "cardio.h"
 
const int analogPin = A0;
int val=0;
long time;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
  time = millis();//Permettra de définir un intervalle pour lequel le programme fonctionne
}

void loop() {
  // put your main code here, to run repeatedly:

 calculpouls(); // On invoque la fonction préparée dans cardio.cpp et cardio.h
}
