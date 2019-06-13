#pragma once

#include <list>
#include "Component.hpp"

using namespace std;

class GameObject
{
public:
	GameObject();
	~GameObject();
	list<Component*> componentsList;
	list<GameObject*> childs;
	GameObject* parrent;
	int GetID();
	string GetName();
private:
	int id;
	string name;
};