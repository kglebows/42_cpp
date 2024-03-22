/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:18:10 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 16:25:26 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*canonicalForm*/
Intern::Intern(){
	std::clog << "Intern:: Default Constructor" << std::endl;
}
Intern::~Intern(){
	std::clog << "Intern:: Destructor" << std::endl;
}
Intern::Intern(Intern const& copy){
	*this = copy;
	std::clog << "Intern:: Copy Constructor" << std::endl;
}
Intern& Intern::operator=(Intern const& copy){
	std::clog << "Intern:: Copy Assignment Operator" << std::endl;
	(void)copy;
	return(*this);
}



/*memberFunctions*/
AForm *Intern::makeForm(std::string form, std::string target){
	int						i = 0;
	static std::string		formNames[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"};
	static std::string		formNicknames[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"};
	while (i < 4){
		if (form == formNames[i] || form == formNicknames[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << form << std::endl;
		return(new PresidentialPardonForm(target));
	case 1:
		std::cout << "Intern creates " << form << std::endl;
		return(new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern creates " << form << std::endl;
		return(new ShrubberyCreationForm(target));
	default:
		std::cout << form << " does not exist! Form could not be made." << std::endl;
		return(0);
	}
}