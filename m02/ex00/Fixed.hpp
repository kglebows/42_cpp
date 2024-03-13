/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:36:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/13 13:26:20 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(Fixed const& copy);
	Fixed& operator=(Fixed const& equalTo);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif