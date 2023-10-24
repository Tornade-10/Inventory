#pragma once
#include "Weapon.h"

class Sword : public Weapon
{
public:

	int MaxDurability;
	int Durability;

	Sword(std::string _name, int _type, int _id, int _damage, int _range, int _maxDurability);

	void Use();
	void Equip();
};

