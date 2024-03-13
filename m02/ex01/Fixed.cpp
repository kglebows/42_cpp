/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:37:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/13 18:18:05 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*constructor/destructor*/
Fixed::Fixed(){
	std::clog << "Fixed:: Default constructor called" << std::endl;
	value = 0;
}
Fixed::Fixed(const int value){
	std::clog << "Fixed:: int Assign constructor called" << std::endl;
	this->value = value << fractionalBits;
}
Fixed::Fixed(const float value){
	std::clog << "Fixed:: float Assign constructor called" << std::endl;
	this->value = static_cast<int>(roundf(value * (1 << fractionalBits)));
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
	// std::clog << "Fixed:: getRawBits member function called" << std::endl;
	return(value);
}

/*set*/
void Fixed::setRawBits(int const raw){
	// std::clog << "Fixed:: setRawBits member function called" << std::endl;
	this->value = raw;
}

/*conversion*/
float	Fixed::toFloat(void) const{
	return (static_cast<float>(getRawBits()) / static_cast<float>(1 << fractionalBits));
}
int	Fixed::toInt(void) const{
	return (this->getRawBits() >> this->fractionalBits);
}

/*ostream operator*/
std::ostream& operator<<(std::ostream &ostream, Fixed const& fixed){
	ostream << fixed.toFloat();
	return (ostream);
}