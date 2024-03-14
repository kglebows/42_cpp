/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:49:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 18:37:48 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap	fker("Trapachu");
	ClapTrap	scndFker("Trapazaur");

	fker.attack("Trapazaur");
	scndFker.takeDamage(2);
	scndFker.takeDamage(3);
	scndFker.takeDamage(3);
	scndFker.takeDamage(3);
	scndFker.takeDamage(3);

	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	fker.beRepaired(1);
	return (0);
}
