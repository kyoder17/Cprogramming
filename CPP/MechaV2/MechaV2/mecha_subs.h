#pragma once
#include "weapon.h"
#include <vector>


#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// WARNING
/* 
There is an example subclass included... delete it if you want to try it without reference
Please note, this is a bare bones subclass. It only includes enough to get you started
*/




// Sub Classes
class NEXT : public Mecha {
private:
	Weapon LHandW;
	Weapon RHandW;
	Weapon LBackW;
	Weapon RBackW;

public:
	// Default Constructor
	NEXT() {
		mechaName = "Nomad";
		variant = "N/A";
		type = "NEXT";
		power = 100;
	}
	// Constructor
	NEXT(std::string mn, std::string va, int pwr = 100, int spd = 2) {
		mechaName = mn;
		variant = va;
		type = "NEXT";
		power = pwr;
		speed = spd;
	}
	// Below sets weapons, take weapon object
	void set_leftHand_weapon(Weapon wp) {
		LHandW = wp;
	}
	void set_rightHand_weapon(Weapon wp) {
		RHandW = wp;
	}
	void set_leftBack_weapon(Weapon wp) {
		LBackW = wp;
	}
	void set_rightBack_weapon(Weapon wp) {
		RBackW = wp;
	}
	bool setHP(int hp) {
		// NEXT units can only have 2000 health
		if (hp <= 2000) {
			hitPoints = hp;
			return true;
		}
		return false;
	}
	void display_stats() {
		std::cout << "Displaying Stats" << std::endl;
		display_main_stats();
		std::cout << "===== WEAPONS =====" << std::endl;
		std::cout << "Left Hand Weapon:" << std::endl;
		LHandW.display_weapon_stats();
		std::cout << "\nRight Hand Weapon:" << std::endl;
		RHandW.display_weapon_stats();
		std::cout << "\nLeft Back Weapon: " << std::endl;
		LBackW.display_weapon_stats();
		std::cout << "\nRight Back Weapon: " << std::endl;
		RBackW.display_weapon_stats();
		std::cout << "\n\n";

	}
	void display_weapons() {
		std::cout << "\n";
		std::cout << "1: ";
		LHandW.display_weapon_name();
		std::cout << "2: ";
		RHandW.display_weapon_name();
		std::cout << "3: ";
		LBackW.display_weapon_name();
		std::cout << "4: ";
		RBackW.display_weapon_name();
	}
	virtual int SpecificWeaponDamage(int WpNum)
	{
		if (WpNum == 1)
		{
			return LHandW.weapon_damage();
		}
		if (WpNum == 2)
		{
			return RHandW.weapon_damage();
		}
		if (WpNum == 3)
		{
			return LBackW.weapon_damage();
		}
		if (WpNum == 4)
		{
			return RBackW.weapon_damage();
		}
	}
	int get_power_cost(int WpNum)
	{
		if (WpNum == 1)
		{
			return LHandW.weapon_cost();
		}
		if (WpNum == 2)
		{
			return RHandW.weapon_cost();
		}
		if (WpNum == 3)
		{
			return LBackW.weapon_cost();
		}
		if (WpNum == 4)
		{
			return RBackW.weapon_cost();
		}
	}

};
