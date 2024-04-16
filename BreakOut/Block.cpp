
#include "Block.h"

Block::Block(sf::Vector2f position)
{
	pos = position;
}

void Block::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::RectangleShape box(sf::Vector2f(20, 20));
	box.setFillColor(sf::Color(rand()%256, rand() % 256, rand() % 256));
	box.setPosition(pos);
	target.draw(box);
}

