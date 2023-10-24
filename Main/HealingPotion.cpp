#include "HealingPotion.h"

#include <iostream>

HealingPotion::HealingPotion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount) :
Potion(_name, _type, _id, _bonus, _maxItemCount)
{
}

void HealingPotion::Use()
{
	if (ItemCount > 0)
	{
		std::cout << "You healed some hp" << std::endl;
		ItemCount = ItemCount - 1;
		std::cout << "You have " << ItemCount << " of " << GetName() << std::endl;
	}
	else
	{
		std::cout << "You don't have any of those potions left" << std::endl;
	}
}

