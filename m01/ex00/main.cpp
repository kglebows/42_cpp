/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/06 19:07:41 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main() {
	Zombie *ptr[4];
	
	ptr[0] = newZombie("Patric");
	randomChump("Ester");
	ptr[1] = newZombie("Stefan");
	randomChump("Katia");
	ptr[2] = newZombie("Jozef");
	randomChump("Ilona");
	randomChump("Pola");
	ptr[3] = newZombie("Albert");
	delete ptr[0];
	delete ptr[1];
	delete ptr[2];
	delete ptr[3];
	return (0);
}
