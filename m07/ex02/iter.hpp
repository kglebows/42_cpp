/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:33:00 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/26 11:38:43 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename PTR, typename FCN>
void	iter(PTR pointer, int lenght, FCN function){
	for (int j = 0; j < lenght; j++)
		function(pointer[j]);
}

#endif