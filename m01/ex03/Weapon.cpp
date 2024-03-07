/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:39:27 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 15:17:17 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*constructor/destructor*/
Weapon::Weapon() {
}
Weapon::Weapon(std::string type) : type(type) {
}
Weapon::~Weapon() {
}

/*get*/
const std::string&	Weapon::getType() const {
	return (type);
}

/*set*/
void	Weapon::setType(std::string type) {
	this->type = type;
}
