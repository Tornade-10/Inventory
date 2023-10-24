#include "Bow.h"

#include <iostream>

Bow::Bow(std::string _name, int _type, int _id, int _damage, int _range, int _maxAmo) :
	Weapon(_name, _type, _id, _damage, _range)
{
	MaxAmo = _maxAmo;
	Amo = MaxAmo;
}


void Bow::Use()
{
	if (IsEquiped && Amo < 0)
	{
		std::cout << "you used the " << GetName() << std::endl;
		Amo = Amo - 1;
		std::cout << "Arrow left : " << Amo << std::endl;
	}
	else
	{
		std::cout << "You can't use a bow that isn't equiped or doesn't have arrow";
	}
}

void Bow::Equip()
{
	IsEquiped = true;
	std::cout << "You equiped the " << GetName() << std::endl;
	std::cout << "Arrow left : " << Amo << "/" << MaxAmo << std::endl;
}