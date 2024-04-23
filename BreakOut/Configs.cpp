#include "Configs.h"


void Configs::setScreen(sf::Vector2i screenSize)
{
	this->screenSize = screenSize;
}

float Configs::getLen() const
{
	Configs* a = const_cast<Configs*>(this);
	float xLen=screenSize.x/15.0;
	float yLen = (screenSize.y*0.4) / 10;
	if (xLen > yLen)
		a->len = yLen;
	else
		a->len = xLen;
	return len;
}


Configs globalConfigs;