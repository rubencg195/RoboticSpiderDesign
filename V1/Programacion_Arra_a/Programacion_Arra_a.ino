/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
int Arriba= 5;
int Abajo= 4;
int Izquierda= 3;
int Derecha= 2;

Servo Servo1; 
Servo Servo2; 

void setup() 
{ 
  pinMode(Arriba, INPUT);
  pinMode(Abajo, INPUT);
  pinMode(Derecha, INPUT);
  pinMode(Izquierda, INPUT);
  Servo1.attach(10);
  Servo2.attach(11);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  if(digitalRead(Arriba)==LOW)
  {                            // in steps of 1 degree 
      Servo1.write(180);              // tell servo to go to position in variable 'pos' 
      delay(10);                       // waits 110ms for the servo to reach the position 
                          // waits 110ms for the servo to reach the position 
    
  }
  
  if(digitalRead(Abajo)==LOW)
  {
      Servo1.write(0);              // tell servo to go to position in variable 'pos' 
      delay(10);                       // waits 110ms for the servo to reach the position 
                          // waits 110ms for the servo to reach the position  
  }

  if((digitalRead(Arriba)==HIGH)&&(digitalRead(Abajo)==HIGH))
  {
      Servo1.write(90);              // tell servo to go to position in variable 'pos' 
      delay(10); 
  }
  
  //////////////////////////////////////////////////////////////////////////////////////////////////
  
  if(digitalRead(Derecha)==LOW)
  {                            // in steps of 1 degree 
      Servo2.write(180);              // tell servo to go to position in variable 'pos' 
      delay(10);                       // waits 110ms for the servo to reach the position 
                          // waits 110ms for the servo to reach the position 
    
  }
  
  if(digitalRead(Izquierda)==LOW)
  {
      Servo2.write(0);              // tell servo to go to position in variable 'pos' 
      delay(10);                       // waits 110ms for the servo to reach the position 
                          // waits 110ms for the servo to reach the position  
  }

  if((digitalRead(Izquierda)==HIGH)&&(digitalRead(Derecha)==HIGH))
  {
      Servo2.write(90);              // tell servo to go to position in variable 'pos' 
      delay(10); 
  }
} 
