#include "Potion.h"

Potion::Potion(std::string _name, int _type, int _id, int _bonus, int _maxItemCount):
Item(_name, _type, _id)
{
	Bonus = _bonus;
	MaxItemCount = _maxItemCount;
	ItemCount = MaxItemCount;
}

//int Potion::GetItemCount()
//{
//	return ItemCount;
//}
