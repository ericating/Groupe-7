int val;
int i=1;//compteur
int tab[12]={1,2,3,4,5,6,7,8,9,10,11,12};
void setup() {
  
  Serial.begin(9600);
   
}

void loop() {
  
val = analogRead(A0);
Serial.println(val);
 for(i=0;i<12;i=i+3){
    pinMode(tab[i],OUTPUT);
    pinMode(tab[i+3],OUTPUT);
    digitalWrite(tab[i],HIGH);
    delay(3); 
     digitalWrite(tab[i+3],HIGH);
     delay(3);
 }  
 for(i=0;i<12;i=i+3){
    digitalWrite(tab[i],LOW);
    delay(20); 
     digitalWrite(tab[i+3],LOW);
     delay(20);  
 }   
 
}
