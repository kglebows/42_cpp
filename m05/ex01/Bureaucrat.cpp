/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:15 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 17:57:35 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*canonicalForm*/
Bureaucrat::Bureaucrat(){
	std::clog << "Bureaucrat:: Default Constructor" << std::endl;
}
Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name) {
	if (grade <= 1)
		throw GradeTooHighException();
	if (grade >= 150)
		throw GradeTooLowException();
	this->grade = grade;
	std::clog << "Bureaucrat:: " << name << " with grade " << grade << " Constructor" << std::endl;
}
Bureaucrat::~Bureaucrat(){
	std::clog << "Bureaucrat:: Destructor" << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const& copy) : name(copy.name), grade(copy.grade){
	std::clog << "Bureaucrat:: Copy Constructor" << std::endl;
}


/*exceptions*/
const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade to high");
}
const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade to low");
}

/*memberFunctions*/
std::string const& Bureaucrat::getName() const{
	return (name);
}
int Bureaucrat::getGrade() const{
	return(grade);
}
void	Bureaucrat::incrementGrade(){
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}
void	Bureaucrat::decrementGrade(){
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}
void	Bureaucrat::signForm(Form & paper){
	try {
		paper.beSigned(*this);
		std::cout << this->getName() << " signed " << paper.getName() << std::endl;
	} catch (std::exception &e){
		std::cout << this->getName() << " couldn't sign " << paper.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return out;
}