#pragma once

#include "SFML/System.hpp"

class Transform {
	Transform();
	~Transform();

	sf::Vector2f position;
	sf::Vector2f scale;
	float angle;
};