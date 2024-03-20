/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:50:27 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 18:14:30 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string		name;
	bool					isSigned;
	const int				signGrade;
	const int				executeGrade;
	
public:
	Form();
	Form(std::string const& name, int signGrade, int executeGrade);
	~Form();
	Form(Form const& copy);

	std::string const& getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat & pawn);

	class GradeTooHighException : public std::exception{
	public:
		const char*		what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char*		what() const throw();
	};
	class AlreadySigned : public std::exception{
	public:
		const char*		what() const throw();
	};
};

std::ostream &operator<<(std::ostream& out, const Form& b);

#endif