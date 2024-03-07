/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:36:06 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 15:17:30 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
private:
	std::string		type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string&		getType() const;
	void					setType(std::string type);
};



#endif