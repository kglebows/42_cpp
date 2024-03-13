/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:04:18 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/12 14:40:51 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
public:
	Harl();
	~Harl();
	void		complain(std::string level);
};

typedef void (Harl::*HarlFeedback)(void);



#endif