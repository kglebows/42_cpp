/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:08:59 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:21:22 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*canonicalForm*/
Dog::Dog(){
	std::clog << "Dog:: Default Constructor" << std::endl;
	type = "Dog";
}
Dog::~Dog(){
	std::clog << "Dog:: Destructor" << std::endl;
}
// Dog::Dog(Dog const& copy){
// 	std::clog << "Dog:: Copy Constructor" << std::endl;
// 	*this = copy;
// }
// Dog& Dog::operator=(Dog const& copy){
// 	std::clog << "Dog:: Copy Assignment Operator" << std::endl;
// 	if (this != &copy){
// 		this->type = copy.type;
// 	}
// 	return (*this);
// }

/*memberFunctions*/
void	Dog::makeSound() const{
	std::cout << "*Dog sounds*" << std::endl;
}