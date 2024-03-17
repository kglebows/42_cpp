/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:11:10 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 16:37:30 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	~Cat();
	Cat(Cat const& copy);
	Cat& operator=(Cat const& copy);

	void	makeSound() const;
	Brain* getBrain() const;
};

#endif