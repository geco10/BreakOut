#pragma once
#include<SFML/Graphics.hpp>
#include"Global.h"
class Platform:public sf::Drawable
{
	sf::Vector2f pos;
	
public:
	Platform();
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
	void move(sf::Vector2f shift);
};

