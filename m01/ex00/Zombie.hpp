/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:54:43 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/06 19:02:33 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce( void ); 
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif