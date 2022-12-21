#include <avr/io.h>
#include <stdbool.h>
#include<util/delay.h>
int main (void)
{
    int X,Y,Z;
    bool f; 
 //set pin 2,3,4 of arduino as input
  DDRD    |=0b00000000 ;
  PORTD=0xFC;

DDRB = 0b00100000 ; // 8 pin as ouput


while(1)
{           
          X= (PIND & (1 << PIND2)) == (1 << PIND2);

                Y = (PIND & (1 << PIND3)) == (1 << PIND3);

                Z = (PIND & (1 << PIND4)) == (1 << PIND4);

               
                
               f=(X&&Y)||(Y&&!Z);
         
           PORTB = (f<<5);

}
         return 0;
}

