#include "Platform.h"
#include<iostream>


void Platform::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	sf::Texture texture;
	if (!texture.loadFromFile("Pics/platform.png"))
	{
		// Error...
	}
	
	sf::Sprite Sprite;
	Sprite.setTexture(texture);
	Sprite.setScale(sf::Vector2f(texture.getSize().x / 50.0, texture.getSize().y / 13.0));
    Sprite.setPosition(pos);
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
