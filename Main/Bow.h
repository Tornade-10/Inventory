#pragma once
#include "Weapon.h"
class Bow : public Weapon
{
public:

	int MaxAmo;
	int Amo;

	Bow(std::string _name, int _type, int _id, int _damage, int _range, int _maxAmo);

	void Use();
	void Equip();
};

