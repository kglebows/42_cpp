/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:11:39 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 13:21:17 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*canonicalForm*/
Cat::Cat(){
	std::clog << "Cat:: Default Constructor" << std::endl;
	type = "Cat";
}
Cat::~Cat(){
	std::clog << "Cat:: Destructor" << std::endl;
}
// Cat::Cat(Cat const& copy){
// 	std::clog << "Cat:: Copy Constructor" << std::endl;
// 	*this = copy;
// }
// Cat& Cat::operator=(Cat const& copy){
// 	std::clog << "Cat:: Copy Assignment Operator" << std::endl;
// 	if (this != &copy){
// 		this->type = copy.type;
// 	}
// 	return (*this);
// }

/*memberFunctions*/
void	Cat::makeSound() const{
	std::cout << "*Cat sounds*" << std::endl;
}