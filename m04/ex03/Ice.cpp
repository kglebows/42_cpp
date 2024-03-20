/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:34:43 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 11:34:37 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*Constructor/Destructor*/
Ice::Ice(): AMateria("ice") {}
Ice::~Ice(){}

/*memberFunctions*/
AMateria* Ice::clone() const{
	return(new Ice(*this));
}
void Ice::use(ICharacter& target){
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
}
AMateria& Ice::operator=(AMateria const& copy){
	std::clog << "Cure:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		return (*new Ice());
	}
	return (*this);
}
