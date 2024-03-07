/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 11:13:40 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main() {
	int				N = 10;
	std::string		name = "Zombie";
	if (N < 1){
		std::cout << "Horde number has to be bigger then 0 ;>" << std::endl;
		return (1);
	}
	Zombie* Horde = zombieHorde(N,name);
	for (int i = 0; i < N; i++) {
		Horde[i].announce();
	}
	delete[] Horde;
	return (0);
}
