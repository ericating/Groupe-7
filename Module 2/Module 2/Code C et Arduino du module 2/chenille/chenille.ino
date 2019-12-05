int pinLed[12]={1,2,3,4,5,6,7,8,9,10,11,12};
void setup() {
  
for(int i=0;i<=11;i++){
  pinMode(pinLed[i],OUTPUT);
  digitalWrite(pinLed[i],LOW);
}
}

void loop() {
  
for(int i=0;i<=11;i++){
  delay(3);
digitalWrite(pinLed[i],HIGH);

}
for(int i=0;i<=11;i++){
digitalWrite(pinLed[i],LOW);
delay(200);
}


}
