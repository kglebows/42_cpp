/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:10:25 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 15:38:38 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string		ideas[100];
public:
	Brain();
	~Brain();
	Brain(Brain const& copy);
	Brain& operator=(Brain const& copy);

	void	addIdea(std::string newIdea);
	void	sayIdeas(void) const;
};

#endif