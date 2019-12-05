
//From Arduino to Processing to Txt or cvs etc. //import import processing.serial.*; //declare PrintWriter output; Serial udSerial; 
 
 import processing.serial.*;
 PrintWriter output;
 Serial udSerial;
void setup() 
{  
  printArray (Serial.list());
  udSerial = new Serial(this, Serial.list()[0], 9600);   
  output = createWriter ("Battements.csv"); 
} 
 
  void draw()  
{     
  if (udSerial.available() > 0) 
      {       
        String SenVal = udSerial.readString();       
            if (SenVal != null) 
          {         
            output.println(SenVal); 
            printArray(SenVal);
          }
       }   
} 
 
  void keyPressed()
  {     
        output.flush();     
        output.close();     
        exit();    
  } 