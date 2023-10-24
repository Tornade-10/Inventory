#include "Sword.h"

#include <iostream>
#include <set>
#include <stdbool.h>
#include <stdbool.h>

Sword::Sword(std::string _name, int _type, int _id, int _damage, int _range, int _maxDurability):
Weapon(_name, _type, _id, _damage, _range)
{
	MaxDurability = _maxDurability;
	Durability = MaxDurability;
}

void Sword::Use()
{
	if (IsEquiped && Durability < 0)
	{
		std::cout << "you used the " << GetName() << std::endl;
		Durability = Durability - 1;
		std::cout << "Durability left : " << Durability << std::endl;
	}
	else
	{
		std::cout << "You can't use a weapon that isn't equiped or broken";
	}
}

void Sword::Equip()
{
	IsEquiped = true;
	std::cout << "You equiped the " << GetName() << std::endl;
	std::cout << "Durability left : " << Durability << std::endl;
}

