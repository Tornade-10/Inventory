#pragma once
#include "Item.h"

class Weapon : public Item
{
protected:
	bool IsEquiped;

public:
	int Damage;
	int Range;

	bool GetIsEquiped()
	{
		return IsEquiped;
	}

	Weapon(std::string _name, int _type, int _id, int _damage, int _range);
};

