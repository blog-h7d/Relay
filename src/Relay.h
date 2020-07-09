// Relay.h

#ifndef _RELAY_h
#define _RELAY_h

#include "Arduino.h"
  
class Relay
{
 protected:
	 int  pin;
	 bool state;

 public:
	 Relay();
	 Relay(int port);
	 void init();
	 bool getState();
	 void setRelay(bool bOn);	 
	 void on();
	 void off();
};

#endif
