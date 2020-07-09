#include "Relay.h"

#define NUMBER_OF_RELAYS        16

// create relay objects and set ports
Relay relays[NUMBER_OF_RELAYS] = {A5, A4, A3, A2, 12, 11, 10, 9, A1, A6, 3, 4, 5, 6, 7, 8};

void setup() 
{
  for (int i = 0; i < NUMBER_OF_RELAYS; i++)
    relays[i].init();
}

void loop() 
{
  for (int i = 0; i < NUMBER_OF_RELAYS; i++)
  {
    relays[i].setRelay(true);
    delay(500);
    relays[i].setRelay(false);
    delay(500);      
  }

  relays[0].on();
  relays[1].on();
  relays[2].on();  
  delay(1000);
  relays[0].off();
  relays[1].off();
  relays[2].off(); 
  delay(1000);

 if (relays[3].getState() == false)
    relays[3].on();

  delay(500);
    
 if (relays[3].getState() == true)
    relays[4].on();
    
  delay(1000);
}
