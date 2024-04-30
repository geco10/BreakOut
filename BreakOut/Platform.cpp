#include "Platform.h"
#include<iostream>


Platform::Platform()
{
	pos.x = globalConfigs.getGameScreenSize().x / 2.0;
	pos.y= globalConfigs.getGameScreenSize().y - size.x;
}

void Platform::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	sf::Texture texture;
	if (!texture.loadFromFile("Pics/platform.png"))
	{
		// Error...
	}
	
	sf::Sprite Sprite;
	Sprite.setTexture(texture);
	Sprite.setScale(sf::Vector2f(texture.getSize().x / (globalConfigs.getLen()*size.x), texture.getSize().y / (globalConfigs.getLen()*size.y)));
    Sprite.setPosition(pos*globalConfigs.getLen());
	target.draw(Sprite);
	/*sf::RectangleShape plat(sf::Vector2f(50,13 ));
	plat.setFillColor(sf::Color::Blue);
	plat.setPosition(pos);
	target.draw(plat);*/
}

void Platform::move(sf::Vector2f shift)
{
	pos += shift;
}
