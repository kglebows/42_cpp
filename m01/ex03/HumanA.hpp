/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:53:34 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/07 16:40:23 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon			&weapon;
	std::string		name;
public:
	HumanA(Weapon &weapon);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void			attack();
};




#endif