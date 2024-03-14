/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:49:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 19:51:34 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap	fker("Trapaichu");
	ScavTrap	scndFker("Trapoisaur");

	fker.attack("Trapoisaur");
	scndFker.takeDamage(30);
	scndFker.attack("Trapaichu");
	fker.takeDamage(20);
	fker.attack("Trapoisaur");
	scndFker.takeDamage(30);
	scndFker.attack("Trapaichu");
	fker.takeDamage(20);
	fker.attack("Trapoisaur");
	scndFker.takeDamage(30);
	scndFker.attack("Trapaichu");
	fker.takeDamage(20);
	fker.attack("Trapoisaur");
	scndFker.takeDamage(30);
	fker.highFivesGuys();
	return (0);
}
