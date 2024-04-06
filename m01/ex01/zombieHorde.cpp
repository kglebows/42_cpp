/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:27:01 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 11:12:28 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N < 1)
		return (NULL);
	Zombie *ptr = new Zombie[N];
	for (int i = 0; i < N; i++) {
		ptr[i].setName(name + "_horde");
	}
	return (ptr);
}