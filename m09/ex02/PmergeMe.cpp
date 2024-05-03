#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

int PmergeMe::char2int(const char* str){
	int i = 0;
	int number = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			throw std::invalid_argument("Invalid argument");
		number = number * 10 + str[i] - '0';
		i++;
	}
	return number;
}

void PmergeMe::mergeSortVector(std::vector<std::pair<int, int> > &pairVector){
	if (pairVector.size() <= 1)
		return;
	int middle = pairVector.size() / 2;
	std::vector<std::pair<int, int> > left(pairVector.begin(), pairVector.begin() + middle);
	std::vector<std::pair<int, int> > right(pairVector.begin() + middle, pairVector.end());
	mergeSortVector(left);
	mergeSortVector(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), pairVector.begin());
}

void PmergeMe::mergeSortDeque(std::deque<std::pair<int, int> > &pairDeque){
	if (pairDeque.size() <= 1)
		return;
	int middle = pairDeque.size() / 2;
	std::deque<std::pair<int, int> > left(pairDeque.begin(), pairDeque.begin() + middle);
	std::deque<std::pair<int, int> > right(pairDeque.begin() + middle, pairDeque.end());
	mergeSortDeque(left);
	mergeSortDeque(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), pairDeque.begin());
}

void PmergeMe::printVectorChain(std::vector<int> &chain){
	for (size_t i = 0; i < chain.size(); i++)
	{
		std::cout << chain[i];
		if (i < chain.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::vectorMe(int argc, const char* argv[]){
	int first;
	int second;
	for (int i = 1; i < argc; i++)
	{
		if (argv[i + 1]) {
			first = char2int(argv[i]);
			second = char2int(argv[i + 1]);
			if (first > second)
				pairVector.push_back(std::make_pair(first, second));
			else
				pairVector.push_back(std::make_pair(second, first));
			i ++;
		} else {
			subChainVector.push_back(char2int(argv[i]));
		}
	}
	mergeSortVector(pairVector);
	for (size_t i = 0; i < pairVector.size(); i++)
	{
		mainChainVector.push_back(pairVector[i].first);
		subChainVector.push_back(pairVector[i].second);
	}
	if (subChainVector.size() > mainChainVector.size()){
		subChainVector.push_back(subChainVector[0]);
		subChainVector.erase(subChainVector.begin());
	}
	std::cout << "Main chain: ";
	printVectorChain(mainChainVector);
	std::cout << "Sub chain: ";
	printVectorChain(subChainVector);

	mainChainVector.insert(mainChainVector.begin(), subChainVector[0]);
	jacob.first = 1;
	jacob.second = 3;
	int temp;
	std::vector<int>::iterator where;
	for (int i = jacob.second; i > jacob.first; i--)
	{
		if ((i - 1 < (int)subChainVector.size())){
			where = std::lower_bound(mainChainVector.begin(), mainChainVector.end(), subChainVector[i - 1]);
			mainChainVector.insert(where, subChainVector[i - 1]);
		}
		if (i == jacob.first + 1){
			temp = jacob.first;
			jacob.first = jacob.second;
			jacob.second = jacob.first + 2 * temp;
			i = jacob.second + 1;
			if (jacob.first >= (int)subChainVector.size())
				break;
		}
	}
	std::cout << "Result chain: ";
	printVectorChain(mainChainVector);
	

}
