/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:17:42 by kglebows          #+#    #+#             */
/*   Updated: 2024/04/30 10:12:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*constructorDestructor*/
ScalarConverter::ScalarConverter()
{}
ScalarConverter::~ScalarConverter()
{}
ScalarConverter::ScalarConverter(ScalarConverter const& copy){
	(void)copy;
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const& copy){
	(void)copy;
	return(*this);
}

/*memberFunctions*/
void ScalarConverter::convert(std::string const& original){

	if (original.empty()){
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: impossible"<< std::endl;
		std::cout << "double: impossible"<< std::endl;
		return ;
	}
	std::string input;
	if (original[original.length() - 1] == 'f')
		input = original.substr(0, original.length() - 1);
	else
		input = original;
	std::istringstream before(input);
	double		toPrint;
	char		c;
	bool		flag = false;

	before >> toPrint;

	if (original.length() == 1 && std::isprint(original[0]) && !std::isdigit(original[0])){
		std::cout	<< "char: '" << original[0] << "'" << std::endl;
		c = original[0];
		flag = true;
	} else if (original.length() == 3 && std::isprint(original[1]) && ((original[0] == '\'' && original[2] == '\'') || (original[0] == '\"' && original[2] == '\"'))) {
		std::cout	<< "char: '" << original[1] << "'" << std::endl;
		c = original[1];
		flag = true;
	} else if (!before.eof() && !(original == "-inf" || original == "-inff" || original == "+inf" || original == "+inff" || original == "nan" || original == "nanf" || original == "inf")){
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: impossible"<< std::endl;
		std::cout << "double: impossible"<< std::endl;
		return ;
	} else if (original.length() == 1 && !std::isprint(original[0])) {
		std::cout	<< "char: Non displayable" << std::endl;
	} else if (before.fail()) {
		std::cout	<< "char: impossible" << std::endl;
	} else if (toPrint == 127 || (toPrint >= 0 && toPrint <= 31)) {
		std::cout	<< "char: Non displayable" << std::endl;
	} else if (toPrint >= 32 && toPrint <= 126) {
		std::cout	<< "char: '" << static_cast<char>(toPrint) << "'" << std::endl;
	} else {
		std::cout	<< "char: impossible" << std::endl;
	}


	if (toPrint >= INT_MIN && toPrint <= INT_MAX && !before.fail()){
		std::cout	<< "int: " << static_cast<int>(toPrint) << std::endl;
	} else if (flag) {
		std::cout	<< "int: " << static_cast<int>(c) << std::endl;
	} else {
		std::cout	<< "int: impossible" << std::endl;
	}

	if (original == "-inf" || original == "-inff"){
		std::cout	<< "float: -inff" << std::endl;
		std::cout	<< "double: -inf" << std::endl;
	} 
	else if (original == "+inf" || original == "+inff"){
		std::cout	<< "float: +inff" << std::endl;
		std::cout	<< "double: +inf" << std::endl;
	}
	else if (original == "nan" || original == "nanf"){
		std::cout	<< "float: nanf" << std::endl;
		std::cout	<< "double: nan" << std::endl;
	} else if (flag) {
		std::cout	<< "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout	<< "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	} else if (before.fail()) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	} else {
		std::cout	<< "float: " << std::fixed << std::setprecision(1) << static_cast<float>(toPrint) << "f" << std::endl;
		std::cout	<< "double: " << std::fixed << std::setprecision(1) << static_cast<double>(toPrint) << std::endl;
	}
}
