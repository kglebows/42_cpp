#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

class PmergeMe
{
private:
	std::vector<std::pair<int, int> > pairVector;
	std::deque<std::pair<int, int> > pairDeque;
	std::vector<int> mainChainVector;
	std::deque<int> mainChainDeque;
	std::vector<int> subChainVector;
	std::deque<int> subChainDeque;
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(PmergeMe const & copy);
	PmergeMe & operator=(PmergeMe const & copy);

	void vectorMe(int argc, const char* argv[]);
	void dequeMe(int argc, const char* argv[]);
	int char2int(const char* str);
	void mergeSortVector(std::vector<std::pair<int, int> > &pairVector);
	void mergeSortDeque(std::deque<std::pair<int, int> > &pairDeque);
	void printVectorChain(std::vector<int> &chain);


};

#endif