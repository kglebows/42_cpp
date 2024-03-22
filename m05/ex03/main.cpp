/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:30 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 16:23:12 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main (){
	std::cout << "* Making some Bureaucrats... *" << std::endl;
	Bureaucrat president("Zaphod Beeblebrox", 1);
	Bureaucrat senator("Palpatine", 20);
	Bureaucrat general("Kenobi", 50);
	Bureaucrat worker("Employee nr925432523512351253457234234", 60);
	Bureaucrat pimp("ThirdSenpaiPimp", 140);
	Bureaucrat joe("joe", 150);
	std::cout << std::endl;
	
	
	
	std::cout << "* Welocome Intern! This is an amazing opportunity for you! ]:> *" << std::endl;
	
	Intern intern;
	
	AForm *Trump = intern.makeForm("presidential pardon", "trump");
	AForm *HelloThere = intern.makeForm("RobotomyRequestForm", "General Kenobi");
	AForm *forest = intern.makeForm("ShrubberyCreationForm", "forest");
	AForm *test = intern.makeForm("InternPayRiseForm", "intern");
	(void)test;
	
	std::cout << std::endl;
	
	std::cout << "* Checking some Forms... *" << std::endl;
	std::cout << *Trump << std::endl;
	std::cout << *HelloThere << std::endl;
	std::cout << *forest << std::endl;
	std::cout << std::endl;
	
	std::cout << "* test1 *" << std::endl;
	joe.signForm(*forest);
	joe.executeForm(*forest);
	pimp.signForm(*forest);
	pimp.executeForm(*forest);
	worker.signForm(*forest);
	worker.executeForm(*forest);
	std::cout << std::endl;

	std::cout << "* test2 *" << std::endl;
	srand(static_cast<unsigned int>(time(0)));
	general.signForm(*HelloThere);
	senator.signForm(*HelloThere);
	general.executeForm(*HelloThere);
	senator.executeForm(*HelloThere);
	senator.executeForm(*HelloThere);
	senator.executeForm(*HelloThere);
	senator.executeForm(*HelloThere);
	std::cout << std::endl;
	
	std::cout << "* test3 *" << std::endl;
	senator.executeForm(*Trump);
	senator.signForm(*Trump);
	senator.executeForm(*Trump);
	president.executeForm(*Trump);
	std::cout << std::endl;

	delete Trump;
	delete HelloThere;
	delete forest;
	return(0);
}