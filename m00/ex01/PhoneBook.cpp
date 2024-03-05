	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2024/03/04 12:28:20 by kglebows          #+#    #+#             */
	/*   Updated: 2024/03/04 19:57:52 by kglebows         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include "PhoneBook.hpp"

	/*Constructor Destructor*/
	PhoneBook::PhoneBook() {
		// std::cout << "Constuctor - PhoneBook" << std::endl;
	}
	PhoneBook::~PhoneBook() {
		// std::cout << "Destructor - PhoneBook" << std::endl;
	}

	/*Utils*/
	int	PhoneBook::findLastIndex() {
		int			i;

		i = 0;
		while (!this->contactList[i].getFirstName().empty())
			i++;
		return (i);
	}
	bool	PhoneBook::isPhoneNumber(std::string& str) {
		int			i;

		if (str[0] == '+')
			i = 1;
		else
			i = 0;
		while (std::isdigit(str[i]))
			i++;
		if (str[i])
			return (false);
		else
			return (true);
	}
	bool	PhoneBook::isAlpha(std::string& str) {
		int			i;

		i = 0;
		if (std::isspace(str[i]))
			return (false);
		while (std::isalpha(str[i]) || std::isspace(str[i]))
			i++;
		if (str[i])
			return (false);
		else
			return (true);
	}
	std::string	PhoneBook::print10(std::string& str) {
		if (str.length() > 10)
			return(str.substr(0,9) + ".");
		else
			return(str);
	}

	/*input*/
	std::string	PhoneBook::inputFirstName() {
		std::string		inputLine;

		while(inputLine.empty() || !PhoneBook::isAlpha(inputLine)) {
			std::cout << "First Name	: ";
			std::getline(std::cin, inputLine);
		}
		return (inputLine);
	}
	std::string	PhoneBook::inputLastName() {
		std::string		inputLine;

		while(inputLine.empty() || !PhoneBook::isAlpha(inputLine)) {
			std::cout << "Last Name	: ";
			std::getline(std::cin, inputLine);
		}
		return (inputLine);
	}
	std::string	PhoneBook::inputNickname() {
		std::string		inputLine;

		while(inputLine.empty()) {
			std::cout << "Nickname	: ";
			std::getline(std::cin, inputLine);
		}
		return (inputLine);
	}
	std::string	PhoneBook::inputPhoneNumber() {
		std::string		inputLine;

		while(inputLine.empty() || !PhoneBook::isPhoneNumber(inputLine)) {
			std::cout << "Phone Number	: ";
			std::getline(std::cin, inputLine);
		}
		return (inputLine);
	}
	std::string	PhoneBook::inputDarkestSecret() {
		std::string		inputLine;

		while(inputLine.empty()) {
			std::cout << "Darkest Secret	: ";
			std::getline(std::cin, inputLine);
		}
		return (inputLine);
	}

	/*Options*/
	void	PhoneBook::addOption() {
		int index = PhoneBook::findLastIndex();
		if (index > 7)
			index = nrOfContacts % 8;
		std::cout << "Please fill out the contact information:" << std::endl;
		contactList[index].setFirstName(inputFirstName());
		contactList[index].setLastName(inputLastName());
		contactList[index].setNickname(inputNickname());
		contactList[index].setPhoneNumber(inputPhoneNumber());
		contactList[index].setDarkestSecret(inputDarkestSecret());
		nrOfContacts++;
	}
	void	PhoneBook::searchOption() {
		std::cout	<< std::setw(10) << "INDEX" << "|"
					<< std::setw(10) << "FIRST NAME" << "|"
					<< std::setw(10) << "LAST NAME" << "|"
					<< std::setw(10) << "NICKNAME" << std::endl;
		int last = PhoneBook::findLastIndex();
		if (last > 7)
			last = 8;
		for (int i = 0; i < last; i++) {
			std::cout	<< std::setw(10) << i + 1 << "|"
						<< std::setw(10) << PhoneBook::print10(contactList[i].getFirstName()) << "|"
						<< std::setw(10) << PhoneBook::print10(contactList[i].getLastName()) << "|"
						<< std::setw(10) << PhoneBook::print10(contactList[i].getNickname()) << std::endl;
		}
		std::cout << "Choose index for full data: ";
		std::string inputLine;
		std::getline(std::cin, inputLine);
		int selection = 0;
		if (!inputLine.empty() && PhoneBook::isPhoneNumber(inputLine))
			selection = atoi(inputLine.c_str());
		if (selection > 0 && selection < last + 1) {
			std::cout	<< "First Name	: " << contactList[selection - 1].getFirstName() << std::endl;
			std::cout	<< "Last Name	: " << contactList[selection - 1].getLastName() << std::endl;
			std::cout	<< "Nickname	: " << contactList[selection - 1].getNickname() << std::endl;
			std::cout	<< "Phone Number	: " << contactList[selection - 1].getPhoneNumber() << std::endl;
			std::cout	<< "Darkest Secret	: " << contactList[selection - 1].getDarkestSecret() << std::endl;
		} else
			std::cout << "Wrong index..." << std::endl;
	}
x