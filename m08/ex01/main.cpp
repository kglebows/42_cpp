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

#include "Span.hpp"

#include <cstdlib>
#include <ctime>

std::vector<int> generateRandomNumbers(unsigned int count) {
    std::vector<int> numbers;
    for (unsigned int i = 0; i < count; ++i) {
        numbers.push_back(std::rand());
    }
    return numbers;
}

int main() {
	std::cout << std::endl << "Subcject test:" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl << "its over 9000!!!!:" << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));
	Span Vegeta = Span(9000);
	std::vector<int> over9000 = generateRandomNumbers(10000);
	try
	{
		Vegeta.addNumbers(over9000.begin(), over9000.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Shortest: " << Vegeta.shortestSpan() << std::endl;
	std::cout << "Longest: " << Vegeta.longestSpan() << std::endl;
	std::cout << std::endl << "how about ... a milion!:" << std::endl;
	Span Mwahahhaha = Span(1000000);
	std::vector<int> oneMilion = generateRandomNumbers(1000000);
	try
	{
		Mwahahhaha.addNumbers(oneMilion.begin(), oneMilion.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Shortest: " << Mwahahhaha.shortestSpan() << std::endl;
	std::cout << "Longest: " << Mwahahhaha.longestSpan() << std::endl;
	
}
