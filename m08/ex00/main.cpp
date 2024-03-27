/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:39:16 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/25 17:41:46 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int main() {
    std::vector<int> diceValues;
	diceValues.push_back(4);
	diceValues.push_back(6);
	diceValues.push_back(8);
	diceValues.push_back(7);
	diceValues.push_back(7);
	diceValues.push_back(12);
	diceValues.push_back(20);
	std::cout << std::endl;

    try {
		while (42){
			int& found = easyfind(diceValues, 7);
			std::cout << "Found: " << found << "!" << std::endl;
			found = 10;
			std::cout << "Changing it to " << found << "..." << std::endl << std::endl;
		}
    } catch (const whatNotFound& e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << std::endl;
    return 0;
}
