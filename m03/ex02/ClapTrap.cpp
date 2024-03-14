/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:49:50 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 18:38:22 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*constructor/destructor*/
ClapTrap::ClapTrap(){
	std::clog << "ClapTrap:: Default contructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name){
	std::clog << "ClapTrap:: " << name << " contructor" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}
ClapTrap::ClapTrap(ClapTrap const& copy){
	std::clog << "ClapTrap:: Copy " << copy.name << " contructor" << std::endl;
	*this = copy;
}
ClapTrap::~ClapTrap(){
	std::clog << "ClapTrap:: " << name << " destructor" << std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap const& equalTo){
	std::clog << "ClapTrap:: Copy Assignment Operator of " << equalTo.name << std::endl;
	if (this != &equalTo){
		name = equalTo.name;
		hp = equalTo.hp;
		ep = equalTo.ep;
		ad = equalTo.ad;
	}
	return (*this);
}

/*member functions*/
void	ClapTrap::attack(const std::string& target){
	if (hp < 1){
		std::cout << "ClapTrap " << name << " is unable to battle! " << std::endl;
	} else if (ep > 0){
		std::cout << "ClapTrap " << name << " uses ClapAttack! ";
		std::cout << "It's Super Effective! " << target << " takes " << ad << " points of trap damage!" << std::endl;
		ep--;
	} else {
		std::cout << "ClapTrap " << name << " uses ClapAttack! ";
		std::cout << "It's not very effective... out of mana bruh :<" << std::endl;
	}
}
void	ClapTrap::takeDamage(unsigned int amount){
	if (hp < 1)
		std::cout << "ClapTrap " << name << " is unable to battle! " << std::endl;
	else {
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		hp -= amount;
		if (hp < 1)
			std::cout << "ClapTrap " << name << " has fainted!" << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount){
	
	if (hp < 1)
		std::cout << "ClapTrap " << name << " is unable to battle! " << std::endl;
	else if (ep > 0){
		std::cout << "ClapTrap " << name << " uses ClapRepair! ";
		std::cout << "It's Super Effective! " << name << " recovers " << amount << " health points!" << std::endl;
		ep--;
		hp += amount;
	} else {
		std::cout << "ClapTrap " << name << " uses ClapRepair! ";
		std::cout << "It's not very effective... out of mana bruh :<" << std::endl;
	}
}
