#include "Weapon.h"


Weapon::Weapon(std::string _name, int _type, int _id, int _damage, int _range):
Item(_name, _type, _id)
{
	Damage = _range;
	Range = _range;
	IsEquiped = false;
}