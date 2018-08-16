#include "mecha.h"
#include "mecha_subs.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib> 
#include <time.h>

void introMenu(std::vector<NEXT> actualMechas);
std::vector<NEXT> creatMecha();
NEXT mechSelection(std::vector<std::string> listOfMechs, std::vector<NEXT> actualMechas);
int combatPhase1(NEXT player1, NEXT player2);
int combatMenu(NEXT player);
int check_power(NEXT player, int powerCost);
int check_for_crit();


int main() {
	time_t timer;
	srand(time(&timer));

	std::vector<std::string> listOfMechs;
	std::vector<NEXT> actualMechas;
	NEXT player1Mecha;
	NEXT player2Mecha;
	int winner = 0;

	listOfMechs.emplace_back("Proton");
	listOfMechs.emplace_back("Shiva"); 
	listOfMechs.emplace_back("Johnson");
	// TODO: Create your weapons here. 
	// Don't over think this step... just create weapon objects. One weapon can be used on multiple mechs

	// Now we can do our main logic
	// This is where our game gets programmed
	// Have fun here 
	// Don't get stuck on requirments... just do it!
	actualMechas = creatMecha();
	introMenu(actualMechas);
	
	std::cout << "Player 1 please select your mecha" << std::endl;
	player1Mecha = mechSelection(listOfMechs, actualMechas);
	std::cout << "\nPlayer 2 please select your mecha" << std::endl;
	player2Mecha = mechSelection(listOfMechs, actualMechas);

	winner = combatPhase1(player1Mecha, player2Mecha);
	std::cout << "Player" << winner << " wins!" << std::endl;
	getchar();
	getchar();

	return 0;
}


void introMenu(std::vector<NEXT> actualMechas)
{
	//std::vector<NEXT>temp = actualMechas;
	std::cout << "Welcome to Mecha Fighter\n" << "Press enter to continue" << std::endl;
	getchar();
	std::cout << "The following is a list of Mechas to chose from" << std::endl;
	for (auto& item : actualMechas)
	{
		item.display_stats();

		std::cout << item.getHP()<<std::endl;//////////remove after testing
		std::cout << item.getMechaName()<<std::endl;
		std::cout << "press enter to continue\n";
		getchar();
	}

}


std::vector<NEXT> creatMecha()
{

	// TODO: Create your sub mechs here
	// Ensure you also pass your weapons to your mechs... you can do this via on sub mech creation or through a setter method
	// Don't overthink this one either... reference course and example if needed. 
	std::vector<NEXT> actualMechas;

	//create weapons for the mechas
	Weapon shotgun("shotgun", "gun", 100, 50);
	Weapon plasma_blaster("plasma blaster", "plasma", 250, 150);
	Weapon dagger("dagger", "blade", 50, 10);
	Weapon sword("sword", "blade", 100, 10);
	Weapon minigun("minigun", "gun", 150, 100);
	Weapon missle("missle", "missle", 200, 150);
	Weapon laser("laser", "laser", 175, 100);

	//create first mecha
	NEXT Proton("Proton", "N/A", 500,5);
	Proton.set_leftHand_weapon(shotgun);
	Proton.set_rightHand_weapon(shotgun);
	Proton.set_rightBack_weapon(dagger);
	Proton.set_leftBack_weapon(dagger);
	Proton.setHP(1900);
	actualMechas.emplace_back(Proton);

	//create second mecha
	NEXT Shiva("Shiva", "N/A", 450,4);
	Shiva.set_leftHand_weapon(laser);
	Shiva.set_rightHand_weapon(sword);
	Shiva.set_rightBack_weapon(missle);
	Shiva.set_leftBack_weapon(missle);
	Shiva.setHP(1500);
	actualMechas.emplace_back(Shiva);

	//create third mecha
	NEXT Johnson("Johnson", "N/A", 500,2);
	Johnson.set_leftHand_weapon(plasma_blaster);
	Johnson.set_rightHand_weapon(shotgun);
	Johnson.set_rightBack_weapon(minigun);
	Johnson.set_leftBack_weapon(dagger);
	Johnson.setHP(1200);
	actualMechas.emplace_back(Johnson);

	//possible future mecha 
	NEXT BossMecha("BossMecha", "N/A", 500,5);
	Johnson.set_leftHand_weapon(plasma_blaster);
	Johnson.set_rightHand_weapon(sword);
	Johnson.set_rightBack_weapon(minigun);
	Johnson.set_leftBack_weapon(dagger);
	return actualMechas;
}




NEXT mechSelection(std::vector<std::string> listOfMechs, std::vector<NEXT> actualMechas)
{
	int placeHolderMechaChoice = 0;
	std::string input;
	NEXT player1Mecha=actualMechas.back();
	std::cout << "Please select the Mecha number you wish to use!" << std::endl;
	int i = 1;
	for(std::vector<std::string>::iterator it= listOfMechs.begin();it !=listOfMechs.end();it++)
	{
		std::cout << i << ": " << *it << std::endl;
		i++;
	}
	while (true)
	{
		//Reverify that the age is of the appropriate type
		std::getline(std::cin, input);
		std::stringstream myStream(input);
		if (myStream >> placeHolderMechaChoice)
		{
			break;
		}
		std::cout << "Invalid number, please try again" << std::endl;
	}
	std::string player1MechaChoice;
	player1MechaChoice = listOfMechs.at(placeHolderMechaChoice - 1);
	std::cout << "You have chosen the " << player1MechaChoice<< "\nGood choice!\n";
	for (auto& item : actualMechas)
	{
		std::string tempName = item.getMechaName();
		if (tempName == player1MechaChoice)
		{
			NEXT player1Mecha=item;
			return player1Mecha;
		}
	}
	return player1Mecha;
}

int combatPhase1(NEXT player1, NEXT player2)
{
	int playerUp = 1;
	if (player2.getSpeed() > player1.getSpeed())
	{
		playerUp = 2;
	}
	int action = 1;
	int damageValue = 0;
	int powerCost = 0;
	int critChecker = 0;
	while (1)
	{
		if (playerUp == 1)
		{
			int testPower = 0;
			std::cout << "\nPlayer 1\n";
			action = combatMenu(player1);
			while (1)
			{
				powerCost = player1.get_power_cost(action);
				testPower = check_power(player1, powerCost);
				if (testPower == 1)
				{
					break;
				}
				std::cout << "make another selection to save power or enter 5 to charge\n";
				std::string input;
				while (true)
				{
					//Reverify that the age is of the appropriate type
					std::getline(std::cin, input);
					std::stringstream myStream(input);
					if (myStream >> action)
					{
						break;
					}
					std::cout << "Invalid number, please try again" << std::endl;
				}
				if (action == 5)
				{
					player1.power_calc(-150);
					break;
				}
			}
			//action = combatMenu(player2);
			if (action > 0 && action < 5)
			{
				powerCost = player1.get_power_cost(action);
				player1.power_calc(powerCost);
				damageValue = player1.SpecificWeaponDamage(action);
				critChecker = check_for_crit();
				if (critChecker == 9)
				{
					damageValue = damageValue * 2;
					std::cout << "Critical Hit\n";
				}
				player2.computeDamageReceived(damageValue);
			}
			std::cout << "Player1 HP is now " << player1.getHP() << std::endl;
			std::cout << "Player1 power is now " << player1.getPower() << std::endl;
			std::cout << "Player2 HP is now " << player2.getHP() << std::endl;
			std::cout << "Player2 power is now " << player2.getPower() << std::endl;
			if (player2.getHP() <= 0)
			{
				return 1;
			}
			playerUp = 2;
		}
		else if (playerUp == 2)
		{
			int testPower = 0;
			std::cout << "\nPlayer 2\n";
			action = combatMenu(player2);
			while (1)
			{

				powerCost = player2.get_power_cost(action);
				testPower = check_power(player2, powerCost);
				if (testPower == 1)
				{
					break;
				}
				std::cout << "make another selection to save power or enter 5 to charge\n";
				std::string input;
				while (true)
				{
					//Reverify that the age is of the appropriate type
					std::getline(std::cin, input);
					std::stringstream myStream(input);
					if (myStream >> action)
					{
						break;
					}
					std::cout << "Invalid number, please try again" << std::endl;
				}
				if (action == 5)
				{
					player2.power_calc(-150);
					break;
				}
			}
			//action = combatMenu(player2);
			if (action > 0 && action < 5)
			{
				powerCost = player2.get_power_cost(action);
				player2.power_calc(powerCost);
				damageValue = player2.SpecificWeaponDamage(action);
				critChecker = check_for_crit();
				if (critChecker == 9)
				{
					damageValue = damageValue * 2;
					std::cout << "Critical Hit\n";
				}
				player1.computeDamageReceived(damageValue);
			}
			std::cout << "Player1 HP is now " << player1.getHP() << std::endl;
			std::cout << "Player1 power is now " << player1.getPower() << std::endl;
			std::cout << "Player2 HP is now " << player2.getHP() << std::endl;
			std::cout << "Player2 power is now " << player2.getPower() << std::endl;
			if (player1.getHP() <= 0)
			{
				return 2;
			}
			playerUp = 1;
		}
		else
		{
			playerUp = 1;
		}
	}
	return 0;
}

int combatMenu(NEXT player)
{
	int action = 1;
	std::string input;
	std::cout << "Please selct the Weapon you would like to use";
	player.display_weapons();
	while (true)
	{
		//Reverify that the age is of the appropriate type
		std::getline(std::cin, input);
		std::stringstream myStream(input);
		if (myStream >> action)
		{
			break;
		}
		std::cout << "Invalid number, please try again" << std::endl;
	}
	return action;
}

int check_power(NEXT player, int powerCost)
{
	int powerCheck = 0;
	powerCheck=player.power_calc(powerCost);
	if (powerCheck <= 0)
	{
		std::cout << "you dont have enough power to do this" << std::endl;
	}
	else if (powerCheck > 0)
	{
		return 1;
	}
	return powerCheck;
}

int check_for_crit()
{

	int random_integer = rand()%10;

	return random_integer;
}

