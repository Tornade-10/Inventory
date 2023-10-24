#pragma once
#include "Potion.h"

class HealingPotion : public Potion
{
public:
	HealingPotion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount);

	void Use();
};

