#pragma once
#include<SFML/Graphics.hpp>
class Platform:public sf::Drawable
{
	sf::Vector2f pos;
	
public:
	Platform(sf::Vector2f screenSize);
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
	void move(sf::Vector2f shift);
};

