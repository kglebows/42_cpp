/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:12:33 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 12:42:11 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

#include <fstream>
void suppressClog() {
	static std::ofstream nullStream("/dev/null");
	std::clog.rdbuf(nullStream.rdbuf());
}

int main()
{
	// suppressClog();
	IMateriaSource* src = new MateriaSource();	

	std::clog << std::endl;
	src->learnMateria(new Ice());
	std::clog << std::endl;

	src->learnMateria(new Cure());
	std::clog << std::endl;

	src->learnMateria(new Ice());
	std::clog << std::endl;

	src->learnMateria(new Cure());
	std::clog << std::endl;

	src->learnMateria(new Cure());
	std::clog << std::endl;

	ICharacter* me = new Character("me");
	std::clog << std::endl;
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::clog << std::endl;
	
	me->equip(tmp);
	std::clog << std::endl;

	tmp = src->createMateria("cure");
	std::clog << std::endl;
	
	me->equip(tmp);

	tmp = src->createMateria("cure");
	std::clog << std::endl;
	
	me->equip(tmp);

	tmp = src->createMateria("cure");
	std::clog << std::endl;
	
	me->equip(tmp);
	std::clog << std::endl;

	ICharacter* bob = new Character("bob");
	std::clog << std::endl;

	me->use(0, *bob);
	std::clog << std::endl;

	me->use(1, *bob);
	std::clog << std::endl;
	
	me->use(1, *bob);
	std::clog << std::endl;

	me->use(5, *bob);
	std::clog << std::endl;
	
	me->use(2, *me);
	std::clog << std::endl;

	
	me->unequip(3);
	
	delete tmp;
	
	delete bob;
	delete me;
	delete src;
	return 0;
}