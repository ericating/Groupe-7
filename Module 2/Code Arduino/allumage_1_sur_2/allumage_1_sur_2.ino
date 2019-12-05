int i; //initialise le compteur. i represente le numero d'une broche
void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir à parcourir les broches à alimenter
  {
    pinMode(i,OUTPUT);
  }
}

void loop(){

    digitalWrite(0, HIGH); 
    digitalWrite(2, HIGH);  
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    delay(1000);       
    digitalWrite(0, LOW);
    digitalWrite(2, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    delay (1000);
    
    digitalWrite(1, HIGH); 
    digitalWrite(3, HIGH);  
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    delay(1000);                     
    digitalWrite(1, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);        
    delay(1000);
}

  
