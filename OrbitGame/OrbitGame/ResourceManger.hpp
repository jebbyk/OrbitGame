#pragma once


#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include <list>

class ResourceManager {
	ResourceManager();
	~ResourceManager();

	int Load(std::string fileName);


	std::list<std::string> extensions;
};

class TexturesManager : public ResourceManager {
	std::map<sf::Texture, std::string> textures;
};

class SoundsManager : public ResourceManager {
	std::map<sf::Sound, std::string> sounds;
};

class FontsManager : public ResourceManager {
	std::map<sf::Font, std::string> sounds;
};