#include "Projectile.h"

void Projectile::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::CircleShape cir(10);
	cir.setPosition(pos);
	cir.setFillColor(sf::Color::Red);
	target.draw(cir);
}
