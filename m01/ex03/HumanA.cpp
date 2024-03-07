/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:46:26 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 16:40:31 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*constructor/destructor*/
HumanA::HumanA(Weapon &weapon) : weapon(weapon){
	// std::cout << "HumanA created" << std::endl;
}
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name) {
	// std::cout << "HumanA: " << name << " with weapon: " << weapon.getType() << " created" << std::endl;
}
HumanA::~HumanA() {
	// std::cout << "HumanA: " << name << " with weapon: " << weapon.getType() << " destroyed" << std::endl;
}

/*atack*/
void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
