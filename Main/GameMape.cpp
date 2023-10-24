#include "GameMape.h"
#include "Item.h"

#include <iostream>

GameMape::GameMape(std::string _name, int _type, int  _id) :
Item(_name, _type, _id)
{
}

void Use()
{
	std::cout << "You used your map, you see that you're definitely lost" << std::endl;
	std::cout << std::endl;
}
