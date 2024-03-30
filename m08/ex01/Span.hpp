#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <limits>

class Span
{
private:
    unsigned int N;
    std::vector<int> vector;
public:
    Span();
    ~Span();
    Span(Span const& copy);
    Span& operator=(Span const& copy);

    Span(unsigned int N);

    void addNumber(int Number);
    void addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
    int shortestSpan();
    int longestSpan();
};



#endif