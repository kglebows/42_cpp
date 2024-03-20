/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:28:17 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 13:02:38 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*canonicalForm*/
Character::Character(){
	std::clog << "Character:: Default Constructor" << std::endl;
	for (size_t i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
	
}
Character::Character(std::string name) : name(name){
	std::clog << "Character:: " << name << " Constructor" << std::endl;
	for (size_t i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
}
Character::~Character(){
	std::clog << "Character:: Destructor" << std::endl;
	for (size_t i = 0; i < 4; i++){
		if (inventory[i] != NULL){
			delete inventory[i];
		}
	}
	
}
Character::Character(Character const& copy){
	std::clog << "Character:: Copy Constructor" << std::endl;
	*this = copy;
}
Character& Character::operator=(Character const& copy){
	std::clog << "Character:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		this->name = copy.name;
		for (size_t i = 0; i < 4; i++){
			if (this->inventory[i])
				delete(this->inventory[i]);
			this->inventory[i] = copy.inventory[i];
		}
	}
	return (*this);
}

/*memberFunctions*/
std::string const & Character::getName() const{
	return (name);
}
void Character::equip(AMateria* m){
	for (size_t i = 0; i < 4; i++){
		if (!inventory[i]){
			inventory[i] = m;
			std::clog << i << ". Materia *" << m->getType() << "* equipped!" << std::endl;
			return;
		}
	}
	std::clog << "Materia Inventory of " << getName() << " is full! No new Materia can be added :<" << std::endl;
}
void Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::clog << "Materia Inventory slot " << idx << " of " << getName() << " does not exist!" << std::endl;
		return ;
	}
	if (!inventory[idx]){
		std::clog << "Materia Inventory slot " << idx << " of " << getName() << " is empty! No Materia can be dropped :<" << std::endl;
		return ;
	}
	std::clog << "Materia Inventory slot " << idx << " of " << getName() << " unequipped! Materia *" << inventory[idx]->getType() << "* dropped on the ground!" << std::endl;
	inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3){	
		std::clog << "Materia Inventory slot " << idx << " of " << getName() << " does not exist!" << std::endl;
		return ;
	}
	if (!inventory[idx]){
		std::clog << "Materia Inventory slot " << idx << " of " << getName() << " is empty! No Materia can be used :<" << std::endl;
		return ;
	}
	std::clog << getName() << " uses *" << inventory[idx]->getType() << "* from inventory slot " << idx << "!" << std::endl;
	inventory[idx]->use(target);
	delete(inventory[idx]);
	inventory[idx] = NULL;
}