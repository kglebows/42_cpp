/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:37:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/13 13:20:47 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*constructor/destructor*/
Fixed::Fixed(){
	std::clog << "Fixed:: Default constructor called" << std::endl;
	value = 0;
}
Fixed::Fixed(const Fixed &copy){
	std::clog << "Fixed:: Copy constructor called" << std::endl;
	*this = copy;
}
Fixed::~Fixed(){
	std::clog << "Fixed:: destructor called" << std::endl;
}

/*operators*/
Fixed &Fixed::operator=(const Fixed &equalTo){
	std::clog << "Fixed:: Copy assinment operator called" << std::endl;
	if (this != &equalTo)
		this->value = equalTo.getRawBits();
	return (*this);
}

/*get*/
int Fixed::getRawBits(void) const{
	std::clog << "Fixed:: getRawBits member function called" << std::endl;
	return(value);
}

/*set*/
void Fixed::setRawBits(int const raw){
	std::clog << "Fixed:: setRawBits member function called" << std::endl;
	value = raw;
}
