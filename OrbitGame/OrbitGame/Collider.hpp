#pragma once
#include "Component.hpp"
#include "Transform.hpp"
#include <list>
#include <SFML/System.hpp>



class Collision {
public:
	Collision();
	~Collision();
	sf::Vector2f collisionPoint;
	Collider* collider1;
	Collider* collider2;
};

class Collider : public Component {
public:
	Collider();
	~Collider();
	Transform* transform;
	float radius;
	int layer;
	std::list<int> interactLayers;
	std::list<Collision*> collisions;
};

class CollisionSystem {
	CollisionSystem();
	~CollisionSystem();

};