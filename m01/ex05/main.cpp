/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/12 14:57:44 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv) 
{
	(void)argv;
	if (argc != 1) {
		std::cout	<< "Wrong input! no arguments!" << std::endl;
		return(1);
	}
	Harl feedbacker;

	feedbacker.complain("DEBUG");
	feedbacker.complain("INFO");
	feedbacker.complain("WARNING");
	feedbacker.complain("ERROR");
	feedbacker.complain("TEST");
	feedbacker.complain("");
	return (0);
}