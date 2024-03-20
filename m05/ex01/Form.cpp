/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:42 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 18:15:53 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*canonicalForm*/
Form::Form() : isSigned(false), signGrade(100), executeGrade(100){
	std::clog << "Form:: Default Constructor" << std::endl;
}
Form::Form(std::string const& name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade){
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	isSigned = false;
	std::clog << "Form:: " << name << " with sign grade " << signGrade << " and execute grade " << executeGrade << " Constructor" << std::endl;
}
Form::~Form(){
	std::clog << "Form:: Destructor" << std::endl;
}
Form::Form(Form const& copy) : name(copy.name), signGrade(copy.signGrade), executeGrade(copy.executeGrade){
	isSigned = false;
	std::clog << "Form:: Copy Constructor" << std::endl;
}


/*exceptions*/
const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade to high");
}
const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade to low");
}
const char* Form::AlreadySigned::what() const throw(){
	return ("Form is already signed!");
}

/*memberFunctions*/
std::string const& Form::getName() const{
	return (name);
}
int Form::getSignGrade() const{
	return(signGrade);
}
int Form::getExecuteGrade() const{
	return(executeGrade);
}
bool Form::getIsSigned() const{
	return(isSigned);
}
void Form::beSigned(Bureaucrat & pawn){
	if (isSigned == true)
		throw AlreadySigned();
	if (signGrade < 1 || executeGrade < 1 || pawn.getGrade() < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150 || pawn.getGrade() > 150 || pawn.getGrade() > signGrade)
		throw GradeTooLowException();
	this->isSigned = true;
}



std::ostream &operator<<(std::ostream& out, const Form& b) {
	out << b.getName() << " Form : Sign Grade = " << b.getSignGrade() << ", Execute Grade = " << b.getExecuteGrade() << ", Signed: " << b.getIsSigned() << ".";
	return out;
}