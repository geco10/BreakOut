#include "Controller.h"

void Controller::movePlatform(sf::Vector2f a)
{
	platform.move(a);
}

void Controller::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(platform);
	target.draw(level);
	target.draw(proj);
}
