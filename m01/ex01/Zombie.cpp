/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:27:40 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 11:10:24 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*constructor/destructor*/
Zombie::Zombie() {
	// std::cout << "nameless" << ": created" << std::endl;
}
Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << ": created" << std::endl;

}
Zombie::~Zombie() {
	std::cout << name << ": died" << std::endl;
}

/*set*/
void	Zombie::setName(std::string name) {
	this->name = name;
}

/*act*/
void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
