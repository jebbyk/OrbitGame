#pragma once

#include "Transform.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include <list>

class Drawer
{
public:
	int layer;
};

class ImageDrawer : public Drawer {
public:
	ImageDrawer();
	~ImageDrawer();

	Transform* transfrom;
	int layer;

	sf::Sprite* image;

	sf::BlendMode blendMode;

};

class ShapeDrawer : public Drawer {

};

class DrawLayer {

	std::list <sf::Texture> content;

};

class DrawingSystem {
	DrawingSystem();
	~DrawingSystem();
	std::list<DrawLayer> layers;

	int Draw();
};



