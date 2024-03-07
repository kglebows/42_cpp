/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 12:31:57 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string		brainz = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brainz;
	std::string		&stringREF = brainz;
	
	std::cout << &brainz << " - memory address of the string variable" << std::endl;
	std::cout << &stringREF << " - memory address held by stringREF" << std::endl;
	std::cout << stringPTR << " - memory address held by stringPTR" << std::endl;
	std::cout << &stringPTR << " - memory address of stringPTR" << std::endl;
	
	std::cout << brainz << " - the value of the string variable" << std::endl;
	std::cout << stringREF << " - the value pointed to by stringREF" << std::endl;
	std::cout << *stringPTR << " - the value pointed to  by stringPTR" << std::endl;
	
	return (0);
}
