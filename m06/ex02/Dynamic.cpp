/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:17:59 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/25 17:18:22 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dynamic.hpp"

Base * generate(void){
	int	i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << "AAaaaaaaaaaa!" << std::endl;
		return (new A);
	case 1:
		std::cout << "BBbbbbbbbb!" << std::endl;
		return (new B);
	case 2:
		std::cout << "CCcccccc!" << std::endl;
		return (new C);
	default:
		return (NULL);
	}
}
void identify(Base * p){
	std::string		type;
	if (dynamic_cast<A*>(p))
		type = "A";
	else if (dynamic_cast<B*>(p))
		type = "B";
	else if (dynamic_cast<C*>(p))
		type = "C";
	else
		type = "... WTF IS THAT?!";
	std::cout << "CONGRATULATIONS!! IT'S A *" << type << "*!!!" << std::endl;
}
void identify(Base & p){
	std::string		type;
	try	{
		(void)dynamic_cast<A&>(p);
		type = "A";
	}
	catch(const std::exception& e){
		try	{
			(void)dynamic_cast<B&>(p);
			type = "B";
		}
		catch(const std::exception& e){
			try	{
				(void)dynamic_cast<C&>(p);
				type = "C";
			}
			catch(const std::exception& e){
				type = "... WTF IS THAT?!";
			}
		}
	}
	std::cout << "CONGRATULATIONS!! IT'S A *" << type << "*!!! (Reference)" << std::endl;
}
