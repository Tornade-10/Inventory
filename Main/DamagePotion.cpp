#include "DamagePotion.h"

#include <iostream>

DamagePotion::DamagePotion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount) :
Potion(_name, _type, _id, _bonus, _maxItemCount)
{
}

void DamagePotion::Use()
{

	if (ItemCount > 0)
	{
		std::cout << "You'll deal more damage" << std::endl;
		ItemCount = ItemCount - 1;
		std::cout << "You have " << ItemCount << " of " << GetName() << std::endl;
	}
	else
	{
		std::cout << "You don't have any of those potions left" << std::endl;
	}
}
