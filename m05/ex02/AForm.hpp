/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:50:27 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 13:07:24 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string		name;
	bool					isSigned;
	const int				signGrade;
	const int				executeGrade;
	
public:
	AForm(std::string const& name, int signGrade, int executeGrade);
	virtual ~AForm();
	AForm(AForm const& copy);
	AForm& operator=(AForm const& copy);

	std::string const& getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat & pawn);
	void beExecuted(Bureaucrat const& pawn) const;
	virtual void execute(Bureaucrat const& executor) const = 0;

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
	class NotSigned : public std::exception{
	public:
		const char*		what() const throw();
	};
};

std::ostream &operator<<(std::ostream& out, const AForm& b);

#endif