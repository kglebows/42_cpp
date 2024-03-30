#include "Span.hpp"

/*cannonicalForm*/
Span::Span():
    N(0)
{std::clog << "\033[1;30m" << "⚙️  Span:: Default Constructor" << "\033[0m" << std::endl;}
Span::Span(unsigned int N):
    N(N)
{std::clog << "\033[1;30m" << "⚙️  Span:: Max size " << N << " Constructor" << "\033[0m" << std::endl;}
Span::Span(Span const& copy):
    N(copy.N),
    vector(copy.vector)
{std::clog << "\033[1;30m" << "⚙️  Span:: Copy Constructor" << "\033[0m" << std::endl;}
Span& Span::operator=(Span const& copy){
    if (this != &copy){
        N = copy.N;
        vector = copy.vector;
    }
    std::clog << "\033[1;30m" << "🟰  Span:: Copy Assignment Operator" << "\033[0m" << std::endl;
    return (*this);
}
Span::~Span()
{std::clog << "\033[1;30m" << "💣 Span:: Destructor" << "\033[0m" << std::endl;}

/*memberFunctions*/
void Span::addNumber(int Number){
    if (N <= vector.size())
        throw std::length_error("Already reached maximum number of elements!");
    vector.push_back(Number);
}
int Span::shortestSpan(){
    if (vector.size() <= 1)
        throw std::logic_error("Not enough elements for shortest Span!");
    std::sort(vector.begin(), vector.end());
    int shortestSpan = std::numeric_limits<int>::max();
    for (unsigned int i = 1; i < vector.size(); i++){
        int temp = vector[i] - vector[i - 1];
        if (temp < shortestSpan)
            shortestSpan = temp;
    }
    return (shortestSpan);
}
int Span::longestSpan(){
    if (vector.size() <= 1)
        throw std::logic_error("Not enough elements for longest Span!");
    std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
    std::vector<int>::iterator min = std::min_element(vector.begin(), vector.end());
    return (*max - *min);
}
void Span::addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {
    while (begin != end)
        addNumber(*begin++);
}