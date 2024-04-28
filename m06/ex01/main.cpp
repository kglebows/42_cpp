/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:18:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/23 15:10:10 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data dt;
	dt.someDouble = 2;
	dt.someInt = 1;
	dt.someString = "Hello There!";
	dt.somePointer = &dt;
	
	size_t serializedAddress = Serializer::serialize(dt.somePointer);
	Data *deserializedAddress = Serializer::deserialize(serializedAddress);
	
	std::cout	<< "Printing now some addresses :" << std::endl
				<< "dt = " << &dt << std::endl
				<< "dt.somePointer = " << dt.somePointer << std::endl
				<< "serializedAddress = " << serializedAddress << " <- (decimal)" << std::endl
				<< "serializedAddress = " << std::hex << serializedAddress << " <- (hex)" << std::endl
				<< "serializedAddress = 0x" << std::hex << serializedAddress << " <- (hex + address notation)" << std::endl
				<< "deserializedAddress = " << deserializedAddress << std::endl << std::endl;
	
	std::cout	<< "lets extract something..." << std::endl
				<< "dt = " << dt.someString << std::endl
				<< "dt.somePointer = " << dt.somePointer->someString << std::endl
				<< "deserializedAddress = " << deserializedAddress->someString << std::endl
				<< "deserializedAddress->somePointer = " << deserializedAddress->somePointer->someString << std::endl;
	
	return (0);
}