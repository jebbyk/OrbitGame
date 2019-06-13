#pragma once

#include "Collider.hpp"
#include "Transform.hpp"

class RigidBody : public Component{
	RigidBody();
	~RigidBody();
	Collider collider;
	Transform transform;
	float mass;
	sf::Vector2f velocity;
	float torgue;
	int layer;
	std::list<int> interactionLayers;
};

class PhysicsSystem {
	PhysicsSystem();
	~PhysicsSystem();
};
