/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:27:00 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 09:27:22 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*canonicalForm*/
MateriaSource::MateriaSource(){
	std::clog << "MateriaSource:: Default Constructor" << std::endl;
	for (size_t i = 0; i < 4; i++){
		materiaBook[i] = NULL;
	}
}
MateriaSource::~MateriaSource(){
	std::clog << "MateriaSource:: Destructor" << std::endl;
	for (size_t i = 0; i < 4; i++){
		if (materiaBook[i] != NULL)
			delete materiaBook[i];
	}
}
MateriaSource::MateriaSource(MateriaSource const& copy){
	std::clog << "MateriaSource:: Copy Constructor" << std::endl;
	*this = copy;
}
MateriaSource& MateriaSource::operator=(MateriaSource const& copy){
	std::clog << "MateriaSource:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		for (size_t i = 0; i < 4; i++){
			if (materiaBook[i])
				delete(materiaBook[i]);
			materiaBook[i] = copy.materiaBook[i];
		}
	}
	return (*this);
}

/*memberFunctions*/
void MateriaSource::learnMateria(AMateria* newMateria){
	for (size_t i = 0; i < 4; i++){
		if (materiaBook[i] == newMateria){
			std::clog << "Materia already learned!" << std::endl;
			return;
		}
	}
	for (size_t i = 0; i < 4; i++){
		if (!materiaBook[i]){
			materiaBook[i] = newMateria;
			std::clog << i << ". New Materia *" << newMateria->getType() << "* learned!" << std::endl;
			return;
		}
	}
	delete(newMateria);
	std::clog << "Materia Book is full! No new Materia can be learned :<" << std::endl;
	
}
AMateria* MateriaSource::createMateria(std::string const & type){
	for (size_t i = 0; i < 4; i++){
		if (materiaBook[i] && materiaBook[i]->getType() == type){
			std::clog << "Materia *" << materiaBook[i]->getType() << "* created!" << std::endl;
			return (materiaBook[i]->clone());
		}
	}
	std::clog << "Materia *" << type << "* is not in the book!" << std::endl;
	return (0);
}
