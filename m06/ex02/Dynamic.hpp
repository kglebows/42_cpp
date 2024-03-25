/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:25:15 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/25 16:21:30 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNAMIC_HPP
# define DYNAMIC_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <ctime>

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

#endif