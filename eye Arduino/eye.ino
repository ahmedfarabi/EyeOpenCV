#include <Servo.h> 
// CONSTANTS - keys for parsing messages via serial

 
Servo one;
Servo two;
char state;


// Arrays to hold information about state and mapping for each servo

 
void setup() 
{ 
    Serial.begin(9600);
while (! Serial); // Wait until Serial is ready - Leonardo
  Serial.println("ENTER NOW");
  // initialize each servo by passing the pin number to which it is attached

  one.attach(9);       // blue
  two.attach(10);      // black
    
} 
 
void loop() { 
  while(Serial.available()){     
      state = Serial.read();
      //flag=0;   
    }
    
 //SERVOOOOOOOOOOOOOO 1111111111111111111111111111111111111111111111111111111111111111111
 
 if(state == 'u') { 

 //pos2=30;
 one.write(60);
 delay(15);

 //flag=1;
  //Serial.println("open");
 }


if(state == 'd' ) { 
 
 //pos2=90;
 one.write(180);
 delay(15);

  //flag=1;
  //Serial.println("close");
 }
 
 
//SERVOOOOOOOOOOOOO 2222222222222222222222222222222222222222222222222222222222222222222


 if(state == 'l' ) { 
 
          two.write(180);
          delay(15);

 }
 

 if(state == 'r' ) { 
 
          two.write(90);
          delay(15);
 }
 
 if(state == 'f' ) { 
          
          one.write(120);
          two.write(150);
          delay(15);
 }

}


