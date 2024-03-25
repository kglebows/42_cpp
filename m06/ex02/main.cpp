/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:18:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/25 17:15:18 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dynamic.hpp"

int main(){

	srand(time(0));
	
	Base *Hello1 = generate();
	Base &Hello1R = *Hello1;
	identify(Hello1);
	identify(Hello1R);
	
	Base *Hello2 = generate();
	Base &Hello2R = *Hello2;
	identify(Hello2);
	identify(Hello2R);
	
	Base *Hello3 = generate();
	Base &Hello3R = *Hello3;
	identify(Hello3);
	identify(Hello3R);
	
	Base *Hello4 = generate();
	Base &Hello4R = *Hello4;
	identify(Hello4);
	identify(Hello4R);
	
	Base *Hello5 = generate();
	Base &Hello5R = *Hello5;
	identify(Hello5);
	identify(Hello5R);
	
	delete Hello1;
	delete Hello2;
	delete Hello3;
	delete Hello4;
	delete Hello5;
	return (0);
}