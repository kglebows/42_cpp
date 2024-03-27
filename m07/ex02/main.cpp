/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:39:16 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/27 08:06:55 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#include <ctime>
#include <sstream>


int rollDice(int diceValue){
	int roll;

	if (diceValue <= 1)
		return(1);
	roll = rand() % diceValue + 1;
	return (roll);
}

std::string rollString(int lenght){
	std::ostringstream oss;
	if (lenght <= 0)
		return(NULL);
	for (int i = 0; i < lenght; i++){
		oss << static_cast<char>(31 + rollDice(95));
	}
	return(oss.str());
}

int main(){
	srand(time(0));
	
	std::cout << std::endl << "Empty Int:" << std::endl;
	Array<int> emptyInt;
	std::cout << "Array size" << ":" << emptyInt.size() << ":" << std::endl;

	std::cout << std::endl << "Empty String:" << std::endl;
	Array<std::string> emptyString;
	std::cout << "Array size" << ":" << emptyString.size() << ":" << std::endl;
	
	std::cout << std::endl << "Rolls:" << std::endl;
	Array<int> randomDice(6);
	for (unsigned int i = 0; i < randomDice.size(); i++)
		randomDice[i] = i * 100 + rollDice(99);
	for (unsigned int i = 0; i < randomDice.size(); i++)
		std::cout << i + 1 << ":" << randomDice[i] << ":" << std::endl;

	std::cout << std::endl << "Strings:" << std::endl;
	Array<std::string> randomString(4);
	for (unsigned int i = 0; i < randomString.size(); i++)
		randomString[i] = rollString(rollDice(20));
	for (unsigned int i = 0; i < randomString.size(); i++)
		std::cout << i + 1 << ":" << randomString[i] << ":" << std::endl;

	std::cout << std::endl << "Copy Assignment to Empty String:" << std::endl;
	emptyString = randomString;
	for (unsigned int i = 0; i < emptyString.size(); i++)
		std::cout << i + 1 << ":" << emptyString[i] << ":" << std::endl;	

	std::cout << std::endl << "Copy Strings:" << std::endl;
	Array<std::string> copyString = randomString;
	for (unsigned int i = 0; i < copyString.size(); i++)
		std::cout << i + 1 << ":" << copyString[i] << ":" << std::endl;	

	std::cout << std::endl << "Bad Access x2:" << std::endl;
	for (unsigned int i = 0; i < copyString.size() + 2; i++){
		try{
			std::cout << i + 1 << ":" << copyString[i] << ":" << std::endl;	
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}
	}
	

	std::cout << std::endl;
	return (0);
}