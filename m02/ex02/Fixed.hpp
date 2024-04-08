/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:36:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/13 19:19:25 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
	Fixed(const int value);
	Fixed(const float value);

	bool	operator>(Fixed const& compareTo) const;
	bool	operator<(Fixed const& compareTo) const;
	bool	operator<=(Fixed const& compareTo) const;
	bool	operator>=(Fixed const& compareTo) const;
	bool	operator!=(Fixed const& compareTo) const;
	bool	operator==(Fixed const& compareTo) const;
	
	Fixed	operator+(Fixed const& arithmeticTo) const;
	Fixed	operator-(Fixed const& arithmeticTo) const;
	Fixed	operator*(Fixed const& arithmeticTo) const;
	Fixed	operator/(Fixed const& arithmeticTo) const;

	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);

	static const Fixed& max(Fixed const& cmp1, Fixed const& cmp2);
	static  Fixed& max(Fixed & cmp1, Fixed & cmp2);
	static const Fixed& min(Fixed const& cmp1, Fixed const& cmp2);
	static  Fixed& min(Fixed & cmp1, Fixed & cmp2);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &ostream, Fixed const& fixed);

#endif