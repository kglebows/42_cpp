#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const & copy){
	(void)copy;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & copy){
	(void)copy;
	return *this;
}

int PmergeMe::char2int(const char* str){
	if (str[0] == '\0')
		throw std::invalid_argument("Invalid argument! Empty string is not accepted!");
	int i = 0;
	int number = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			throw std::invalid_argument("Invalid argument! Only positive intigers are allowed!");
		if (number > 2147483647 / 10 || (number == 214748364 && str[i] - '0' > 7))
			throw std::out_of_range("Out of range! Maximum value is 2147483647!");
		number = number * 10 + str[i] - '0';
		i++;
	}
	return number;
}

bool PmergeMe::isSorted(std::vector<int> &chain){
	for (size_t i = 0; i < chain.size() - 1; i++)
	{
		if (chain[i] > chain[i + 1])
			return false;
	}
	return true;
}

bool PmergeMe::isSorted(std::deque<int> &chain){
	for (size_t i = 0; i < chain.size() - 1; i++)
	{
		if (chain[i] > chain[i + 1])
			return false;
	}
	return true;
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
		if (i == 3 && chain.size() > 4){
			std::cout << " [...]";
			break;
		}
	}
	std::cout << std::endl;
}

void PmergeMe::printDequeChain(std::deque<int> &chain){
	for (size_t i = 0; i < chain.size(); i++)
	{
		std::cout << chain[i];
		if (i < chain.size() - 1)
			std::cout << " ";
		if (i == 3 && chain.size() > 4){
			std::cout << " [...]";
			break;
		}
	}
	std::cout << std::endl;
}

void PmergeMe::vectorMe(int argc, const char* argv[]){
	std::cout << "before: ";
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i] << " ";
		if (i == 4 && argc > 5){
			std::cout << " [...]";
			break;
		}
	}
	std::cout << std::endl;
	timerStart = clock();
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
	if (subChainVector.size() > 0)
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
	timerEnd = clock();
	std::cout << "After: ";
	printVectorChain(mainChainVector);
	if (isSorted(mainChainVector)){
		std::cout << "Time: " << (double)(timerEnd - timerStart) / CLOCKS_PER_SEC  * 1000 << " ms" << std::endl;
	} else {
		std::cout << "Error: Chain is not sorted" << std::endl;
	}
}

void PmergeMe::dequeMe(int argc, const char* argv[]){
	std::cout << "before: ";
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i] << " ";
		if (i == 4 && argc > 5){
			std::cout << " [...]";
			break;
		}
	}
	std::cout << std::endl;
	timerStart = clock();
	int first;
	int second;
	for (int i = 1; i < argc; i++)
	{
		if (argv[i + 1]) {
			first = char2int(argv[i]);
			second = char2int(argv[i + 1]);
			if (first > second)
				pairDeque.push_back(std::make_pair(first, second));
			else
				pairDeque.push_back(std::make_pair(second, first));
			i ++;
		} else {
			subChainDeque.push_back(char2int(argv[i]));
		}
	}
	mergeSortDeque(pairDeque);
	for (size_t i = 0; i < pairDeque.size(); i++)
	{
		mainChainDeque.push_back(pairDeque[i].first);
		subChainDeque.push_back(pairDeque[i].second);
	}
	if (subChainDeque.size() > mainChainDeque.size()){
		subChainDeque.push_back(subChainDeque[0]);
		subChainDeque.erase(subChainDeque.begin());
	}
	if (subChainDeque.size() > 0){
		mainChainDeque.insert(mainChainDeque.begin(), subChainDeque[0]);
		jacob.first = 1;
		jacob.second = 3;
		int temp;
		std::deque<int>::iterator where;
		for (int i = jacob.second; i > jacob.first; i--)
		{
			if ((i - 1 < (int)subChainDeque.size())){
				where = std::lower_bound(mainChainDeque.begin(), mainChainDeque.end(), subChainDeque[i - 1]);
				mainChainDeque.insert(where, subChainDeque[i - 1]);
			}
			if (i == jacob.first + 1){
				temp = jacob.first;
				jacob.first = jacob.second;
				jacob.second = jacob.first + 2 * temp;
				i = jacob.second + 1;
				if (jacob.first >= (int)subChainDeque.size())
					break;
			}
		}
	}
	timerEnd = clock();
	std::cout << "After: ";
	printDequeChain(mainChainDeque);
	if (isSorted(mainChainDeque)){
		std::cout << "Time: " << (double)(timerEnd - timerStart) / CLOCKS_PER_SEC  * 1000 << " ms" << std::endl;
	} else {
		throw std::runtime_error("Chain is not sorted!");
	}
}
