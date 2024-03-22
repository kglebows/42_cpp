/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:21:24 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 13:08:25 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*constructorDestructor*/
PresidentialPardonForm::PresidentialPardonForm(std::string const& target):
	AForm("PresidentialPardonForm", 25, 5),
	target(target)
{}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy):
	AForm(copy),
	target(copy.target)
{
	std::clog << "PresidentialPardonForm:: Copy Constructor" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

/*memberFunctions*/
void PresidentialPardonForm::execute(Bureaucrat const& executor) const{
	std::cout << target << " has been pardoned by " << executor.getName() << std::endl;
}
const std::string PresidentialPardonForm::getTarget() const{
	return (target);
}