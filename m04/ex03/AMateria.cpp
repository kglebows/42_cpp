/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:28:48 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 12:49:35 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*canonicalForm*/
AMateria::AMateria(){
	std::clog << "AMateria:: Default Constructor" << std::endl;
}
AMateria::AMateria(std::string const & type) : type(type){
	std::clog << "AMateria:: " << type << " Constructor" << std::endl;
}
AMateria::~AMateria(){
	std::clog << "AMateria:: Destructor" << std::endl;
}
AMateria::AMateria(AMateria const& copy){
	std::clog << "AMateria:: Copy Constructor" << std::endl;
	*this = copy;
}
AMateria& AMateria::operator=(AMateria const& copy){
	std::clog << "AMateria:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		return (*this);
	}
	return (*this);
}

/*memberFunctions*/
std::string const & AMateria::getType() const{
	return(type);
}
void AMateria::use(ICharacter& target){
	std::cout << "Raw Materia gathers around " << target.getName() << "... but nothing happens." << std::endl;
}
