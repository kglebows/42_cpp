/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:49:08 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 19:34:55 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ClapTrap	fker("Trapachu");
	ScavTrap	scndFker("Trapoisaur");

	scndFker.attack("Trapachu");
	fker.takeDamage(20);
	scndFker.guardGate();
	return (0);
}
