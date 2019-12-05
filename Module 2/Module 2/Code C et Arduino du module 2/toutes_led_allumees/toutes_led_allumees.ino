int pinLed[12]={1,2,3,4,5,6,7,8,9,10,11,12};
void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 12; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); 
  }
}
void loop(){

 for(int i=0; i<12; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(1000);
  for(int i=0; i<12; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(1000);
}

  
