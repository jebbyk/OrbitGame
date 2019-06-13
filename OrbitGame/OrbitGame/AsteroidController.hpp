#pragma once

#include "Physics.hpp"
#include "Collider.hpp"

class AsteroidController {
public:
	AsteroidController();
	~AsteroidController();
	Collider* collider;

};