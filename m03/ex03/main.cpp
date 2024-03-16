/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:49:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/16 08:58:12 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	FragTrap	fker("Trapaichu");
	ScavTrap	scndFker("Trapoisaur");
	DiamondTrap	lastFker("Trapoichusaur");

	fker.attack("Trapoisaur");
	scndFker.takeDamage(30);
	scndFker.attack("Trapaichu");
	fker.takeDamage(20);
	
	lastFker.attack("Trapaichu");
	fker.takeDamage(100);
	lastFker.attack("Trapoisaur");
	scndFker.takeDamage(100);
	
	lastFker.whoAmI();
	
	lastFker.attack("Trapoichusaur");
	lastFker.takeDamage(100);
	return (0);
}
