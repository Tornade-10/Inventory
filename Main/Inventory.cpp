#include "Inventory.h"

#include <fstream>
#include <iostream>

#include "GameMape.h"
#include "Weapon.h"

void Inventory::save(const std::string& Save)
{
	std::ofstream outputFile("Save.txt");
	if(outputFile.is_open())
	{
		for (const auto& item:Items)
		{
			outputFile << item->GetName() << " : " << item->GetID() << " : ";

			//if (item->GetType() == TypePotion)
			//{
			//	outputFile << item->GetItemCount() << std::endl;
			//}
		}
		std::ostream close();
	}
}

void Inventory::Add(Item& additem)
{
	Items.push_back(&additem);
}

void Inventory::Dispaly()
{
	for (auto items : Items)
	{
		std::cout << items->GetName() << std::endl;
	}
}

Item* Inventory::UseOnce()
{
	int PlayerInput = 0;

	std::cin >> PlayerInput;

	if (PlayerInput >= 0 && PlayerInput <= Items.size())
	{
		return Items[PlayerInput];
	}
}
