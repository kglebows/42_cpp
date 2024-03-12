/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/12 17:42:08 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv) 
{
	if (argc != 2) {
		std::cout	<< "Wrong input! ./harlFilter 'level'" << std::endl;
		return(1);
	}
	Harl feedbacker;
	std::string filterlevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t filter = 0;
	std::string flvl(argv[1]);
	while (filter < 5){
		if (flvl == filterlevels[filter])
			break;
		filter++;
	}
	switch (filter)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		feedbacker.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		feedbacker.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		feedbacker.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		feedbacker.complain("ERROR");
		break;
	default:
		std::cout << "[ NO FEEDBACK ]" << std::endl;
	}
	return (0);
}