/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:11:39 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:57:36 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*canonicalForm*/
WrongCat::WrongCat(){
	std::clog << "WrongCat:: Default Constructor" << std::endl;
	type = "WrongCat";
}
WrongCat::~WrongCat(){
	std::clog << "WrongCat:: Destructor" << std::endl;
}
// WrongCat::WrongCat(WrongCat const& copy){
// 	std::clog << "WrongCat:: Copy Constructor" << std::endl;
// 	*this = copy;
// }
// WrongCat& WrongCat::operator=(WrongCat const& copy){
// 	std::clog << "WrongCat:: Copy Assignment Operator" << std::endl;
// 	if (this != &copy){
// 		this->type = copy.type;
// 	}
// 	return (*this);
// }

/*memberFunctions*/
void	WrongCat::makeSound() const{
	std::cout << "*WrongCat sounds*" << std::endl;
}