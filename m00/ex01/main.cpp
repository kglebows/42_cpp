/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/04 13:45:41 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	PhoneBook		phoneBook;
	std::string		inputLine;

	if (argc != 1)
		std::cout << "This Awesome PhoneBook takes no arguments!" << std::endl;
	while (!argv[1])
	{
		std::cout << "Enter one of the commands - ADD,SEARCH or EXIT: ";
		std::getline(std::cin, inputLine);
		if (inputLine == "ADD")
			phoneBook.addOption();
		else if (inputLine == "SEARCH")
			phoneBook.searchOption();
		else if (inputLine == "EXIT")
			return (0);
		else
			std::cout << "Wrong command! Try again..." << std::endl;
	}
	return (0);
}
