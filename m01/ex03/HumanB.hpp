/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:50:38 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 16:22:02 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*			weapon;
	std::string		name;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void			attack();
	void			setWeapon(Weapon &weapon);
};




#endif