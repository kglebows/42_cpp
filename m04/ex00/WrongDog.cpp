/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:08:59 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:58:29 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

/*canonicalForm*/
WrongDog::WrongDog(){
	std::clog << "WrongDog:: Default Constructor" << std::endl;
	type = "WrongDog";
}
WrongDog::~WrongDog(){
	std::clog << "WrongDog:: Destructor" << std::endl;
}
// WrongDog::WrongDog(WrongDog const& copy){
// 	std::clog << "WrongDog:: Copy Constructor" << std::endl;
// 	*this = copy;
// }
// WrongDog& WrongDog::operator=(WrongDog const& copy){
// 	std::clog << "WrongDog:: Copy Assignment Operator" << std::endl;
// 	if (this != &copy){
// 		this->type = copy.type;
// 	}
// 	return (*this);
// }

/*memberFunctions*/
void	WrongDog::makeSound() const{
	std::cout << "*WrongDog sounds*" << std::endl;
}