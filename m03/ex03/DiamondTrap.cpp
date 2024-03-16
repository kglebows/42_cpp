/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:11:22 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/16 09:43:42 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*constructor/destructor*/
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), name(name) {
	std::clog << "DiamondTrap:: " << name << " contructor" << std::endl;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
}
DiamondTrap::~DiamondTrap(){
	std::clog << "DiamondTrap:: " << name << " destructor" << std::endl;
}

/*member functions*/
void	DiamondTrap::whoAmI(){
	std::cout << name << ": What... What am I? What kind of abomination ?! Am I still " << ClapTrap::name << "?" << std::endl;
}