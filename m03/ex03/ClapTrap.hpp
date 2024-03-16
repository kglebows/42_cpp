/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:48:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/14 19:22:03 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	int				hp;
	int				ep;
	int				ad;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& copy);
	~ClapTrap();
	ClapTrap& operator=(ClapTrap const& equalTo);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif