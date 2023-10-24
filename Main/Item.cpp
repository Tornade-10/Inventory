#include "Item.h"

Item::Item(std::string _name, int _type, int _id)
{
	Name = _name;
	Type = _type;
	ID = _id;
}

std::string Item::GetName()
{
	return Name;
}

int Item::GetID()
{
	return ID;
}

int Item::GetType()
{
	return Type;
}

