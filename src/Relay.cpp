#include "Relay.h"

Relay::Relay(){}

Relay::Relay(int port)
{
	pin = port;
	state = true; // low level active relay board
}

void Relay::init()
{
	pinMode(pin, OUTPUT);
	digitalWrite(pin, state); 
}

bool Relay::getState()
{
	return !state;
}

void Relay::setRelay(bool bOn)
{
	if (bOn)
		on();
	else
		off();
}

void Relay::on()
{
	if (state != false)
	{
		state = false;
		digitalWrite(pin, state);		
	}
}

void Relay::off()
{
	if (state != true)
	{
		state = true;
		digitalWrite(pin, state);		
	}
}
