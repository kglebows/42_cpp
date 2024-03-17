/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:10:59 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 17:08:55 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*canonicalForm*/
Brain::Brain(){
	std::clog << "Brain:: Default Constructor" << std::endl;
}
Brain::~Brain(){
	std::clog << "Brain:: Destructor" << std::endl;
}
Brain::Brain(Brain const& copy){
	std::clog << "Brain:: Copy Constructor" << std::endl;
	*this = copy;
}
Brain& Brain::operator=(Brain const& copy){
	std::clog << "Brain:: Copy Assignment Operator" << std::endl;
	if (this != &copy){
		for (size_t i = 0; i < 100; i++){
			ideas[i] = copy.ideas[i];
		}
	}
	return (*this);
}

/*memberFunctions*/
void	Brain::addIdea(std::string newIdea) {
	for (size_t i = 0; i < 100; i++){
		if (ideas[i].empty()){
			std::clog << "Brain:: Adding idea..." << std::endl;
			ideas[i] = newIdea;
			return;
		}
		if (i == 99)
			std::cout << "Brainzz fullll, cAn/t tokee moar ideazz1@%!@?." << std::endl;
	}
}
void	Brain::sayIdeas() const{
	for (size_t i = 0; i < 100; i++){
		if (ideas[i] == "")
			break;
		std::cout << i << ". " << ideas[i] << std::endl;
	}
}