/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:03 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/11 19:59:36 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) 
{
	if (argc != 4) {
		std::cout	<< "Wrong input! correct syntax:" << std::endl
					<< "./replace 'filename' 's1' 's2'" << std::endl;
		return(1);
	}
	if (!argv[1]){
		std::cout	<< "Wrong input! filename cannot be empty!" << std::endl;
		return(1);
	}
	if (!argv[2] || !argv[2][0]){
		std::cout	<< "Wrong input! s1 cannot be empty!" << std::endl;
		return(1);
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string line;
	std::ifstream ifile(filename.c_str());
	if (ifile.is_open()){
		std::string ofilename(filename + ".replace");
		std::ofstream ofile(ofilename.c_str());
		while (std::getline(ifile, line)){
			size_t find = line.find(s1, 0);
			while (find != std::string::npos){
				line.erase(find, s1.length());
				line.insert(find, s2);
				find = line.find(s1, find + s2.length());
			}
			ofile << line << std::endl;
		}
		ofile.close();
		ifile.close();
		std::cout	<< "Done!" << std::endl;
	} else {
		std::cout	<< "Wrong input! filename cannot be opened!" << std::endl;
		return(1);
	}
	return (0);
}