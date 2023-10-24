#pragma once
#include "Item.h"

class Potion : public Item
{
protected:
	int ItemCount;

public:
	int Bonus;
	int MaxItemCount;


	//int GetItemCount();

	Potion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount);

};

