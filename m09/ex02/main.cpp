# include "PmergeMe.hpp"

int main(int argc, char const **argv)
{
	if (argc < 2)
	{
		std::cerr << std::endl << BLUE << "Usage: ./a.out [int] [int] [int] ..." << RESET << std::endl << std::endl;
		return 1;
	}
	try
	{
		PmergeMe p;
		std::cout << std::endl << GREEN << "Vector:" << std::endl;
		p.vectorMe(argc, argv);
		std::cout << RESET << std::endl;
		std::cout << YELLOW << "Deque:" << std::endl;
		p.dequeMe(argc, argv);
		std::cout << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	return 0;
}
