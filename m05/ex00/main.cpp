/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:30 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 15:47:43 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (){

	std::cout << "*test1*" << std::endl;
	try{
		Bureaucrat yogi("FirstOfficerYogi", 1035124);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "*test2*" << std::endl;
	try{
		Bureaucrat yogi("FirstOfficerYogi", -1035124);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "*test3*" << std::endl;
	Bureaucrat ivan("SecondAdmiralIvan", 3);
	try{
	ivan.incrementGrade();
	std::cout << ivan << std::endl;
	ivan.incrementGrade();
	std::cout << ivan << std::endl;
	ivan.incrementGrade();
	std::cout << ivan << std::endl;
	ivan.incrementGrade();
	std::cout << ivan << std::endl;

	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "*test4*" << std::endl;
	Bureaucrat pimp("ThirdSenpaiPimp", 144);
	try{
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	pimp.decrementGrade();
	std::cout << pimp << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return(0);
}