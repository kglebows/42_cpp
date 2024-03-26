/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:39:16 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/26 12:15:41 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <cstdlib>
#include <ctime>
#include <sstream>

struct diceRoll
{
	int			amount;
	std::string	dice;
	int			diceValue;
};

void rollDice(int diceValue){
	int roll;

	roll = rand() % diceValue + 1;
	std::cout << roll << " ";
}
void upgradeDice(int &diceValue){
	diceValue *= 2;
}

void upgradeDiceName(std::string &diceName){
	std::string preNumber = diceName.substr(1,diceName.size());
	int Number = std::atoi(preNumber.c_str()) * 2;
	std::ostringstream oss;
	oss << "d" << Number;
	diceName = oss.str();
}

void printDice(std::string DiceName){
	std::cout << DiceName << " ";
}

void rollemAll(diceRoll DiceRoll){
	for (int i = 0; i < DiceRoll.amount; i++){
		std::cout << i + 1 << ":";
		printDice(DiceRoll.dice);
		std::cout << "= ";
		rollDice(DiceRoll.diceValue);
	}
		std::cout << std::endl;
}

int main(){
	srand(time(0));
	int DiceValues[] = {4, 6, 8, 10, 12, 20};
	std::string DiceNames[] = {"d4", "d6", "d8", "d10", "d12", "d20"};
	diceRoll	DiceRolls[] = {{4, "d4", 4}, {2, "d6", 6}, {1, "d8", 8}, {10, "d10", 10}, {3, "d12", 12}, {5, "d20", 20}};

	std::cout << std::endl;
	std::cout << "*Dice!*" << std::endl;
	iter(DiceNames, 6, printDice);
	std::cout << std::endl;
	iter(DiceValues, 6, rollDice);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "*Double Dice?*" << std::endl;
	iter(DiceNames, 6, upgradeDiceName);
	iter(DiceValues, 6, upgradeDice);
	iter(DiceNames, 6, printDice);
	std::cout << std::endl;
	iter(DiceValues, 6, rollDice);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "*Quardra Dice?!*" << std::endl;
	iter(DiceValues, 6, upgradeDice);
	iter(DiceNames, 6, upgradeDiceName);
	iter(DiceNames, 6, printDice);
	std::cout << std::endl;
	iter(DiceValues, 6, rollDice);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "*SO MANY DICE!!!*" << std::endl;
	iter(DiceRolls, 6, rollemAll);
	
	return (0);
}