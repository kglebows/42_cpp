/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:50:21 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 16:22:21 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*constructor/destructor*/
HumanB::HumanB() {
	// std::cout << "HumanB created" << std::endl;
}
HumanB::HumanB(std::string name) : name(name) {
	// std::cout << "HumanB: " << name << " created" << std::endl;
}
HumanB::~HumanB() {
	// std::cout << "HumanB: " << name << " destroyed" << std::endl;
}

/*atack*/
void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

/*set*/
void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}