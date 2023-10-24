#pragma once
#include <vector>

#include "Item.h"

enum Type
{
	TypeWeapon,
	TypePotion,
	TypeMap
};



class Inventory
{

public:
	void Add(Item& additem);

	void Dispaly();

	Item* DeletItem(Item* item, int number);

	Item* UseOnce();

	void save(const std::string& Save);

	int Find(Item* element);

	bool Position(int position, Item* itemToCheck);

	std::vector<Item*> Items;

};

