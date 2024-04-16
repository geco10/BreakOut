#include "Platform.h"

Platform::Platform()
{
	pos.x= glob::screenSize.x/2;
	pos.y = glob::screenSize.y+20;
}

void Platform::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	sf::RectangleShape plat(sf::Vector2f(28,8 ));
	plat.setFillColor(sf::Color::Blue);
	plat.setPosition(pos);
	target.draw(plat);
}

void Platform::move(sf::Vector2f shift)
{
	pos += shift;
}
