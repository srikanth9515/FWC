//Driving Seven Segment Display using esp32
#include <Arduino.h>

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(32, a); 
  digitalWrite(33, b); 
  digitalWrite(25, c); 
  digitalWrite(26, d); 
  digitalWrite(27, e); 
  digitalWrite(14, f);     
  digitalWrite(12, g); 
}
void setup() 
{
    pinMode(32, OUTPUT);  
    pinMode(33, OUTPUT);
    pinMode(25, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(12, OUTPUT);            
}
void loop() 
{
//sevenseg(0,0,0,0,0,0,0);  //0
//sevenseg(1,0,0,1,1,1,1);  //1
//sevenseg(0,0,1,0,0,1,0);  //2
//sevenseg(0,0,0,0,1,1,0);  //3
//sevenseg(1,0,0,1,1,0,0);  //4
//sevenseg(0,1,0,0,1,0,0);  //5
//sevenseg(0,1,0,0,0,0,0);  //6
//sevenseg(0,0,0,1,1,1,1);  //7
//sevenseg(0,0,0,0,0,0,0);  //8
sevenseg(0,0,0,0,1,0,0);  //9

}
