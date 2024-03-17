/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:57:14 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 16:36:06 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	~Dog();
	Dog(Dog const& copy);
	Dog& operator=(Dog const& copy);

	void	makeSound() const;
	Brain* getBrain() const;
};

#endif