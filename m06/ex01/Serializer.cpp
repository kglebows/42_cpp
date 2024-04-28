/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:51:10 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/23 14:51:28 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*constructorDestructor*/
Serializer::Serializer(){
}
Serializer::~Serializer(){
}
Serializer::Serializer(Serializer const& copy){
	*this = copy;
}
Serializer& Serializer::operator=(Serializer const& copy){
	(void)copy;
	return(*this);
}

/*methods*/
	size_t Serializer::serialize(Data* ptr){
		return (reinterpret_cast<size_t>(ptr));
	}
	Data* Serializer::deserialize(size_t raw){
		return (reinterpret_cast<Data*>(raw));
	}