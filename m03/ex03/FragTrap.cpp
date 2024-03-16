/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:38:10 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/16 09:31:15 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*constructor/desturctor*/
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::clog << "FragTrap:: " << name << " contructor" << std::endl;
	this->name = name;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
}
FragTrap::~FragTrap(){
	std::clog << "FragTrap:: " << name << " destructor" << std::endl;
}

/*member functions*/
void	FragTrap::attack(const std::string& target){
	if (hp < 1){
		std::cout << "FragTrap " << name << " is unable to battle! " << std::endl;
	} else if (ep > 0){
		std::cout << "FragTrap " << name << " uses FragAttack! ";
		std::cout << "It's Super Effective! " << target << " takes " << ad << " points of trap damage!" << std::endl;
		ep--;
	} else {
		std::cout << "FragTrap " << name << " uses FragAttack! ";
		std::cout << "It's not very effective... out of mana bruh :<" << std::endl;
	}
}
void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << name << " extends his TrapHand and yells : " << std::endl;
	std::cout << name << ": 'Hey Trainer! We just nailed that battle! Let's celebrate with a legendary high-five! Up top!'" << std::endl;
}