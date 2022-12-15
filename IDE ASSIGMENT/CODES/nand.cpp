#include<Arduino.h>
int Z,Y,X,F;




// the setup function runs once when you press reset or power the board
void setup() 
{
    pinMode(2, OUTPUT); 
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    
}

// the loop function runs over and over again forever
void loop()
 {
  
 F=(X&&Y)||(Y&&!Z);
 digitalWrite(2,F);
X = digitalRead(3);  
Y = digitalRead(4);  
Z = digitalRead(5);
}  
  


