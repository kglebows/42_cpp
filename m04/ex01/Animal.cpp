/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:26:11 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:20:05 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*canonicalForm*/
Animal::Animal(){
	std::clog << "Animal:: Default Constructor" << std::endl;
}
Animal::~Animal(){
	std::clog << "Animal:: Destructor" << std::endl;
}
Animal::Animal(Animal const& copy){
	std::clog << "Animal:: Copy Constructor" << std::endl;
	*this = copy;
}
Animal& Animal::operator=(Animal const& copy){
	std::clog << "Animal:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		this->type = copy.type;
	}
	return (*this);
}

/*memberFunctions*/
void	Animal::makeSound() const{
	std::cout << "*Animal sounds*" << std::endl;
}
std::string const& Animal::getType() const{
	return (type);
}