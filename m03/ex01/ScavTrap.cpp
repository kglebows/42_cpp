/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:13:59 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 19:30:12 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*constructor/desturctor*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::clog << "ScavTrap:: " << name << " contructor" << std::endl;
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}
ScavTrap::~ScavTrap(){
	std::clog << "ScavTrap:: " << name << " destructor" << std::endl;
}

/*member functions*/
void	ScavTrap::attack(const std::string& target){
	if (hp < 1){
		std::cout << "ScavTrap " << name << " is unable to battle! " << std::endl;
	} else if (ep > 0){
		std::cout << "ScavTrap " << name << " uses ScavAttack! ";
		std::cout << "It's Super Effective! " << target << " takes " << ad << " points of trap damage!" << std::endl;
		ep--;
	} else {
		std::cout << "ScavTrap " << name << " uses ScavAttack! ";
		std::cout << "It's not very effective... out of mana bruh :<" << std::endl;
	}
}
void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << name << " Gate Keeper Mode Activated! " << std::endl;
}