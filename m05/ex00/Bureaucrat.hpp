/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:53:45 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 15:36:24 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

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

	std::string const& getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();

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