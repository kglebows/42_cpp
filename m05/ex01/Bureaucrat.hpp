/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:53:45 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 11:54:02 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string		name;
	int						grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const& name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const& copy);
	Bureaucrat& operator=(Bureaucrat const& copy);

	std::string const& getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	
	void	signForm(Form & paper);

	class GradeTooHighException : public std::exception{
	public:
		const char*		what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char*		what() const throw();
	};

};

std::ostream &operator<<(std::ostream& out, const Bureaucrat& b);

#endif