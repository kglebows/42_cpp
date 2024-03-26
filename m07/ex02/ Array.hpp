/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Array.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:26:19 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/26 16:08:09 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T*				elements;
	unsigned int	size;
public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(Array const& copy);
	Array& operator=(Array const& copy);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	unsigned int size() const;
};

Array::Array(/* args */)
{
}

Array::~Array()
{
}


#endif