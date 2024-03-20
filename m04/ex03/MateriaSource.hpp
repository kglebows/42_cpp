/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:35:06 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/20 11:03:53 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	materiaBook[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const& copy);
	MateriaSource& operator=(MateriaSource const& copy);
	~MateriaSource();
	void learnMateria(AMateria* newMateria);
	AMateria* createMateria(std::string const & type);
};

#endif