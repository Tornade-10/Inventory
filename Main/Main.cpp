// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <vector>

#include "Inventory.h"

#include "Item.h"
#include "GameMape.h"

#include "Potion.h"
#include "DamagePotion.h"
#include "HealingPotion.h"

#include "Weapon.h"
#include "Sword.h"
#include "Bow.h"

enum PlayerChoice
{
	//GMap,
	SSword,
	LSword,
	LBow,
	SHP,
	HHP,
	SDP,
	HDP
};

int main()
{

	Inventory BackPack;

#pragma region Object

	//Name -> Type -> ID
	//GameMape Map{"Map", TypeMap, 0};

	//Name -> Type -> ID -> Attack -> Range
	Sword ShortSword{"Short Sword", TypeWeapon, 0, 4, 1, 30};
	Sword LongSword{"Long sword", TypeWeapon, 1, 6, 1, 35};

	Bow LongBow{"Long Bow", TypeWeapon, 2, 7, 5, 20};

	//Name -> Type -> ID -> bonus -> Stokage
	HealingPotion SmallHealingPotion{"Small healing Potion", TypePotion, 0, 5, 99};
	HealingPotion HighHealingPotion{"High healing Potion", TypePotion, 1, 20, 20};

	DamagePotion SmallDamagePotion{"Small damage potion", TypePotion, 2, 5, 10};
	DamagePotion HighDamagePotion{ "High damage potion", TypePotion, 3, 10, 3 };

	//BackPack.Add(Map);

	BackPack.Add(ShortSword);
	BackPack.Add(LongSword);

	BackPack.Add(LongBow);

	BackPack.Add(SmallHealingPotion);
	BackPack.Add(HighHealingPotion);

	BackPack.Add(SmallDamagePotion);
	BackPack.Add(HighDamagePotion);

#pragma endregion

	BackPack.Dispaly();

	do
	{
		std::cout << "What do you want to do ?" << std::endl;

		BackPack.UseOnce()->Use();

		BackPack.save("Save.txt");
	}
	while (true);

}
