/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:03:13 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/12 16:32:16 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*constructor/destructor*/
Harl::Harl(/* args */){
}
Harl::~Harl(){
}

/*levels*/
void	Harl::debug(void){
	std::clog	<< "*DEBUG MESSAGE*" << std::endl;
}
void	Harl::info(void){
	std::cout	<< "*INFO MESSAGE*" << std::endl;
}
void	Harl::warning(void){
	std::cerr	<< "*WARNING MESSAGE*" << std::endl;
}
void	Harl::error(void){
	std::cerr	<< "*ERROR MESSAGE*" << std::endl;
}

/*complain*/
	void	Harl::complain(std::string level){
		HarlFeedback ptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		std::string feedback[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (size_t i = 0; i < 4; i++){
			if (feedback[i] == level)
				return((this->*ptr[i])());
		}
	}