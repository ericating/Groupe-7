int choix;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(10,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
  
   
}
void loop() {
   choix = random(2,12);
    Serial.println("votre choix est");
    Serial.println(choix);
  // put your main code here, to run repeatedly:
if(choix==12)
{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 11)
{
 digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix==2)
{
 digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 3)
{
digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 10)
{
digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 5)
{
 digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 6)
{
 digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 7)
{
digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix == 8)
{
 digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(1000);
}
else if(choix==9)
{
 digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
}



  
}
