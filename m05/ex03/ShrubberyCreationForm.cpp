/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:27:21 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 13:12:10 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*constructorDestructor*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):
	AForm("ShrubberyCreationForm", 145, 137),
	target(target)
{}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy):
	AForm(copy),
	target(copy.target)
{
	std::clog << "ShrubberyCreationForm:: Copy Constructor" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*memberFunctions*/
void ShrubberyCreationForm::execute(Bureaucrat const& executor) const{
	(void)executor;
	std::ofstream tree(target + "_shrubbery");
	tree << "                ,@@@@@@@,                      ,@@@@@@@,                ,@@@@@@@," << std::endl;
	tree << "       ,,,.   ,@@@@@@/@@,  .oo8888o.  ,,,.   ,@@@@@@/@@,  .oo8888o. ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	tree << "    ,&^%&%&&%,@@@@@/@@@@@@,8888\\88/8o,&%^&%&&%,@@@@@/@@@@@@,8888\\88/8o,&%^&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	tree << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	tree << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	tree << "   %&&%/ %&%^&&@@\\ V /@@' `88\\8 `/88' %&&%/ %&%^&&@@\\ V /@@' `88\\8 `/88' %&&%/ %&^%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	tree << "   `&%\\ ` /%&'    |.|        \\ '|8'   `&%\\ ` /%&'    |.|        \\ '|8'   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	tree << "       |o|        | |         | |         |o|        | |         | |         |o|        | |         | |" << std::endl;
	tree << "       |.|        | |         | |         |.|        | |         | |         |.|        | |         | |" << std::endl;
	tree << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ \\/ ._\\//_/__/  ,\\_//__\\/." << std::endl;
	tree.close();
}
