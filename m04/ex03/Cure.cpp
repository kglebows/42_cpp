/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:33:27 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 11:33:19 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*Constructor/Destructor*/
Cure::Cure(): AMateria("cure") {}
Cure::~Cure(){}

/*memberFunctions*/
AMateria* Cure::clone() const{
	return(new Cure(*this));
}
void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria& Cure::operator=(AMateria const& copy){
	std::clog << "Cure:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		return (*new Cure());
	}
	return (*this);
}
