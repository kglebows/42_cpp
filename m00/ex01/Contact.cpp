/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:23:35 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/05 09:46:00 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

/*Constructor Destructor*/
Contact::Contact()
{
	// std::cout << "Constuctor - Contact" << std::endl;
}
Contact::~Contact()
{
	// std::cout << "Destructor - Contact" << std::endl;
}

/*get*/
std::string&		Contact::getFirstName()
{
	return(this->firstName);
}
std::string&		Contact::getLastName()
{
	return(this->lastName);
}
std::string&		Contact::getNickname()
{
	return(this->nickname);
}
std::string&		Contact::getPhoneNumber()
{
	return(this->phoneNumber);
}
std::string&		Contact::getDarkestSecret()
{
	return(this->darkestSecret);
}

/*set*/
void			Contact::setFirstName(std::string s)
{
	this->firstName = s;
}
void			Contact::setLastName(std::string s)
{
	this->lastName = s;
}
void			Contact::setNickname(std::string s)
{
	this->nickname = s;
}
void			Contact::setPhoneNumber(std::string s)
{
	this->phoneNumber = s;
}
void			Contact::setDarkestSecret(std::string s)
{
	this->darkestSecret = s;
}
