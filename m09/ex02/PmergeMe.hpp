#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <exception>
#include <ctime>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class PmergeMe
{
private:
	std::vector<std::pair<int, int> > pairVector;
	std::deque<std::pair<int, int> > pairDeque;
	std::vector<int> mainChainVector;
	std::deque<int> mainChainDeque;
	std::vector<int> subChainVector;
	std::deque<int> subChainDeque;
	std::pair<int, int> jacob;
	clock_t timerStart;
	clock_t timerEnd;
	bool isSorted(std::vector<int> &chain);
	bool isSorted(std::deque<int> &chain);
	PmergeMe(PmergeMe const & copy);
	PmergeMe & operator=(PmergeMe const & copy);
public:
	PmergeMe();
	~PmergeMe();

	void vectorMe(int argc, const char* argv[]);
	void dequeMe(int argc, const char* argv[]);
	int char2int(const char* str);
	void mergeSortVector(std::vector<std::pair<int, int> > &pairVector);
	void mergeSortDeque(std::deque<std::pair<int, int> > &pairDeque);
	void printVectorChain(std::vector<int> &chain);
	void printDequeChain(std::deque<int> &chain);


};

#endif