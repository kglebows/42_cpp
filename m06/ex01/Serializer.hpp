/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:25:56 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/23 14:51:30 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct Data
{
	int			someInt;
	double		someDouble;
	std::string	someString;
	Data		*somePointer;
};

class Serializer
{
private:
	Serializer();
	~Serializer();
	Serializer(Serializer const& copy);
	Serializer& operator=(Serializer const& copy);

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	
};

#endif