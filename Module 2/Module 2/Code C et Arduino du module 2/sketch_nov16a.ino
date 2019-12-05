void setup() {
  // put your setup code here, to run once:
//Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
   // digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);
}
