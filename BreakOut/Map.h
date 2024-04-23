#pragma once
#include<SFML/Graphics.hpp>
#include<vector>
#include"Configs.h"
class Map:public sf::Drawable
{
	std::vector<std::string>map;
	const float len = globalConfigs.getLen();
public:
	void manual(std::vector<std::string>Map);
	void LoadFromFile(std::string path);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

