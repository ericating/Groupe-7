void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT); // Signal à l'Arduino que la connexion 1 doit envoyer du courant
  pinMode(1,OUTPUT); // Signal à l'Arduino que la connexion 2 doit envoyer du courant
  pinMode(2,OUTPUT); // Signal à l'Arduino que la connexion 3 doit envoyer du courant
  pinMode(3,OUTPUT); // Signal à l'Arduino que la connexion 4 doit envoyer du courant
  pinMode(10,OUTPUT); // Signal à l'Arduino que la connexion 5 doit envoyer du courant
  pinMode(5,OUTPUT); // Signal à l'Arduino que la connexion 6 doit envoyer du courant
  pinMode(6,OUTPUT); // Signal à l'Arduino que la connexion 7 doit envoyer du courant
  pinMode(7,OUTPUT); // Signal à l'Arduino que la connexion 8 doit envoyer du courant
  pinMode(8,OUTPUT); // Signal à l'Arduino que la connexion 9 doit envoyer du courant
  pinMode(9,OUTPUT); // Signal à l'Arduino que la connexion 10 doit envoyer du courant
           
  }

void loop() 
{
  // put your main code here, to run repeatedly
digitalWrite(0,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(1,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(2,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(3,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(10,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(5,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(6,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(7,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(8,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);
digitalWrite(9,HIGH); // La led connectée sur ce port va s'allumée
delay(1000);

digitalWrite(0,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(1,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(2,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(3,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(10,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(5,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(6,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(7,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(8,LOW); // La led connectée sur ce port va s'etteindre
digitalWrite(9,LOW); // La led connectée sur ce port va s'etteindre
delay(1000); //attente d'une seconde

}
