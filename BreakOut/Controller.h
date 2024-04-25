#pragma once
#include"Platform.h"
#include"Configs.h"
#include"Projectile.h"
#include"LevelManager.h"
class Controller
{
	Platform platform;
	Projectile proj;
	LevelManager level;
public:
	Controller() {}
	void movePlatform(sf::Vector2f a);
};