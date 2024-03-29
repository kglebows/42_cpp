/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/06 19:14:47 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main() {
	Zombie *ptr[4];
	
	ptr[0] = newZombie("Harold");
	randomChump("Samantha");
	ptr[1] = newZombie("Hazel");
	randomChump("Sebastian");
	ptr[2] = newZombie("Hector");
	randomChump("Stella");
	randomChump("Simon");
	ptr[3] = newZombie("Henrietta");
	delete ptr[0];
	delete ptr[1];
	delete ptr[2];
	delete ptr[3];
	return (0);
}
