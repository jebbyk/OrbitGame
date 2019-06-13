// OrbitGame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
	//sf::RenderWindow window2(sf::VideoMode(1280, 720), "SFML works 2!");
	window.setFramerateLimit(60);
	//window2.setFramerateLimit(60);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	//shape.setPosition(Vector2f(-100,-100));
	shape.setOrigin(Vector2f(100, 100));

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();

		//sf::Event event;
		/*while (window2.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window2.close();
		}

		window2.clear();
		window2.draw(shape);
		window2.display();*/
	}


	return 0;
}