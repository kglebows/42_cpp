/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:37:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/13 19:37:46 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*constructor/destructor*/
Fixed::Fixed(){
	// std::clog << "Fixed:: Default constructor called" << std::endl;
	value = 0;
}
Fixed::Fixed(const int value){
	// std::clog << "Fixed:: int Assign constructor called" << std::endl;
	this->value = value << fractionalBits;
}
Fixed::Fixed(const float value){
	// std::clog << "Fixed:: float Assign constructor called" << std::endl;
	this->value = static_cast<int>(roundf(value * (1 << fractionalBits)));
}
Fixed::Fixed(const Fixed &copy){
	// std::clog << "Fixed:: Copy constructor called" << std::endl;
	*this = copy;
}
Fixed::~Fixed(){
	// std::clog << "Fixed:: destructor called" << std::endl;
}

/*operators*/
Fixed &Fixed::operator=(const Fixed &equalTo){
	// std::clog << "Fixed:: Copy assinment operator called" << std::endl;
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

/*operator compare*/
bool	Fixed::operator>(Fixed const& compareTo) const{
	return (toFloat() > compareTo.toFloat());
}
bool	Fixed::operator<(Fixed const& compareTo) const{
	return (toFloat() < compareTo.toFloat());
}
bool	Fixed::operator<=(Fixed const& compareTo) const{
	return (toFloat() <= compareTo.toFloat());
}
bool	Fixed::operator>=(Fixed const& compareTo) const{
	return (toFloat() >= compareTo.toFloat());
}
bool	Fixed::operator!=(Fixed const& compareTo) const{
	return (toFloat() != compareTo.toFloat());
}
bool	Fixed::operator==(Fixed const& compareTo) const{
	return (toFloat() == compareTo.toFloat());
}

Fixed	Fixed::operator+(Fixed const& arithmeticTo) const{
	return (toFloat() + arithmeticTo.toFloat());
}
Fixed	Fixed::operator-(Fixed const& arithmeticTo) const{
	return (toFloat() - arithmeticTo.toFloat());
}
Fixed	Fixed::operator*(Fixed const& arithmeticTo) const{
	return (toFloat() * arithmeticTo.toFloat());
}
Fixed	Fixed::operator/(Fixed const& arithmeticTo) const{
	return (toFloat() / arithmeticTo.toFloat());
}

/*operator increment*/
Fixed	Fixed::operator++(int){
	Fixed temp = *this;
	value++;
	return (temp);
}
Fixed&	Fixed::operator++(void){
	value++;
	return (*this);
}
Fixed	Fixed::operator--(int){
	Fixed temp = *this;
	value--;
	return (temp);
}
Fixed&	Fixed::operator--(void){
	value--;
	return (*this);
}

/*min/max*/
const Fixed& Fixed::max(Fixed const& cmp1, Fixed const& cmp2){
	return (cmp1.toFloat() > cmp2.toFloat() ? cmp1 : cmp2);
}
Fixed& Fixed::max(Fixed & cmp1, Fixed & cmp2){
	return (cmp1.toFloat() > cmp2.toFloat() ? cmp1 : cmp2);
}
const Fixed& Fixed::min(Fixed const& cmp1, Fixed const& cmp2){
	return (cmp1.toFloat() < cmp2.toFloat() ? cmp1 : cmp2);
}
Fixed& Fixed::min(Fixed & cmp1, Fixed & cmp2){
	return (cmp1.toFloat() < cmp2.toFloat() ? cmp1 : cmp2);
}
