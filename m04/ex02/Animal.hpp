/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:25:33 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 17:54:22 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string			type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const& copy);
	Animal& operator=(Animal const& copy);

	virtual void		makeSound() const = 0;
	std::string const&	getType() const;
};




#endif