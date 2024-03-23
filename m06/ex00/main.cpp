/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:18:20 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/23 12:00:59 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Error! Wrong input! Usage: ./Animal <input>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}