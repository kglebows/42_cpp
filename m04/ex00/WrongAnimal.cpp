/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:26:11 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:56:52 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*canonicalForm*/
WrongAnimal::WrongAnimal(){
	std::clog << "WrongAnimal:: Default Constructor" << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::clog << "WrongAnimal:: Destructor" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const& copy){
	std::clog << "WrongAnimal:: Copy Constructor" << std::endl;
	*this = copy;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy){
	std::clog << "WrongAnimal:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		this->type = copy.type;
	}
	return (*this);
}

/*memberFunctions*/
void	WrongAnimal::makeSound() const{
	std::cout << "*WrongAnimal sounds*" << std::endl;
}
std::string const& WrongAnimal::getType() const{
	return (type);
}