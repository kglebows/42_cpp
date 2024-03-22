/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:46:15 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 13:50:47 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*constructor/destructor*/
RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	AForm("RobotomyRequestForm", 72, 45),
	target(target)
{}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy):
	AForm(copy),
	target(copy.target)
{
	std::clog << "RobotomyRequestForm:: Copy Constructor" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

/*memberFunctions*/
void RobotomyRequestForm::execute(Bureaucrat const& executor) const{
	std::cout << "**Some Drilling Noises**" << std::endl;
	// srand(static_cast<unsigned int>(time(0)));
	if (rand() % 2)
		std::cout << target << " has been robotomized by " << executor.getName() << "!" << std::endl;
	else
		std::cout << "Robotomy on " << target << " failed!" << std::endl;
}
