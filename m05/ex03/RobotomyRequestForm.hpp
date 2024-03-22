/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:10:25 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/22 12:32:26 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	const std::string		target;
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const& copy);
	~RobotomyRequestForm();
	
	void execute(Bureaucrat const& executor) const;
};


#endif