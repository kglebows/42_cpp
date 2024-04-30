#include "RPN.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		std::cerr << BLUE << "Usage: " << argv[0] << " <expression>" << RESET <<std::endl;
		return 1;
	}
	try{
		RPN rpn(argv[1]);
	}
	catch(const RPN::Error& e){
		if (argv[1][e.position] != '\0'){
			for (int i = 0; i < e.position; i++) {
				std::cerr << argv[1][i];
			}
			std::cerr << RED << argv[1][e.position] << RESET;
			for (int i = e.position + 1; argv[1][i] != '\0'; i++) {
				std::cerr << argv[1][i];
			}
			std::cerr << std::endl;
		}
		std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
		return 1;
	}
	return 0;
}
