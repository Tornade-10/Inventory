#pragma once
#include "Item.h"
#include "Potion.h"

class DamagePotion : public Potion
{
public:

	DamagePotion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount);

	void Use();

};

