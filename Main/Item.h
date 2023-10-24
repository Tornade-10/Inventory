#pragma once
#include <string>

class Item
{
	std::string Name;
	int Type;
	int ID;

public:

	std::string GetName();
	int GetType();
	int GetID();

	Item(std::string _name, int _type, int _id);

	virtual void  Use() = 0;
	//virtual int GetItemCount() = 0;

};

