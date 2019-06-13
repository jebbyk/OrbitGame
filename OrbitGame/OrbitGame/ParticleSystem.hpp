#pragma once

#include "Drawer.hpp"
#include "Physics.hpp"

class Particle : public Component {
	Particle();
	~Particle();

	Drawer drawer;
	float life;
	sf::Color startColor;
	sf::Color endColor;
};

class ParticleEmitter : public Component {

};

class ParticleSystem {
	std::list<Particle> particles;
};