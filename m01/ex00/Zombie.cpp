/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:27:40 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/06 19:01:12 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*constructor/destructor*/
Zombie::Zombie() {
	
}
Zombie::Zombie(std::string name) {
	this->name = name;
}
Zombie::~Zombie() {
	std::cout << name << ": died" << std::endl;
}
void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
