/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:42 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 18:28:20 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*canonicalAForm*/
AForm::AForm(std::string const& name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade){
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	isSigned = false;
	std::clog << "AForm:: " << name << " with sign grade " << signGrade << " and execute grade " << executeGrade << " Constructor" << std::endl;
}
AForm::~AForm(){
	std::clog << "AForm:: Destructor" << std::endl;
}
AForm::AForm(AForm const& copy) : name(copy.name), signGrade(copy.signGrade), executeGrade(copy.executeGrade){
	isSigned = false;
	std::clog << "AForm:: Copy Constructor" << std::endl;
}
AForm& AForm::operator=(AForm const& copy){
	std::clog << "Form:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		this->isSigned = false;
	}
	return(*this);
}


/*exceptions*/
const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Grade to high");
}
const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Grade to low");
}
const char* AForm::AlreadySigned::what() const throw(){
	return ("Form is already signed!");
}
const char* AForm::NotSigned::what() const throw(){
	return ("Form is not signed!");
}

/*memberFunctions*/
std::string const& AForm::getName() const{
	return (name);
}
int AForm::getSignGrade() const{
	return(signGrade);
}
int AForm::getExecuteGrade() const{
	return(executeGrade);
}
bool AForm::getIsSigned() const{
	return(isSigned);
}
void AForm::beSigned(Bureaucrat & pawn){
	if (isSigned == true)
		throw AlreadySigned();
	if (signGrade < 1 || executeGrade < 1 || pawn.getGrade() < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150 || pawn.getGrade() > 150 || pawn.getGrade() > signGrade)
		throw GradeTooLowException();
	this->isSigned = true;
}
void AForm::beExecuted(Bureaucrat const& pawn) const{
	if (isSigned == false)
		throw NotSigned();
	if (signGrade < 1 || executeGrade < 1 || pawn.getGrade() < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150 || pawn.getGrade() > 150 || pawn.getGrade() > executeGrade)
		throw GradeTooLowException();
	this->execute(pawn);
}

/*ostream*/
std::ostream &operator<<(std::ostream& out, const AForm& b) {
	out << b.getName() << " Form : Sign Grade = " << b.getSignGrade() << ", Execute Grade = " << b.getExecuteGrade() << ", Signed: " << b.getIsSigned() << ".";
	return out;
}