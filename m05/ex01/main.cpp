/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:30 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 11:41:36 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (){

	Bureaucrat pimp("ThirdSenpaiPimp", 69);
	std::cout << "*test1*" << std::endl;
	try{
		Form A1("A1", 1035124, 12512421);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "*test2*" << std::endl;
	try{
		Form A2("A2", -1035124, -12512421);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "*test3*" << std::endl;
	Form B12("B12", 3, 100);
	pimp.signForm(B12);
	std::cout << std::endl;
	std::cout << "*test4*" << std::endl;
	Form C4("C4", 69, 69);
	pimp.signForm(C4);
	std::cout << std::endl;
	std::cout << "*test5*" << std::endl;
	
	Form F16("F16", 130, 1);
	pimp.signForm(F16);
	pimp.signForm(F16);
	
	std::cout << std::endl;

	return(0);
}