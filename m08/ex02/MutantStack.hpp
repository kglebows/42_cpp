#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    /*iterator typedef*/
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    /*canonicalForm*/
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const& copy) : std::stack<T>(copy) {}
    ~MutantStack() {}
    MutantStack& operator=(MutantStack const& copy) {
        std::stack<T>::operator=(copy);
        return *this;
    }

    /*memberFunctions*/
    iterator begin() { return (std::stack<T>::c.begin()); }
    iterator end() { return (std::stack<T>::c.end()); }
    const_iterator begin() const { return (std::stack<T>::c.begin()); }
    const_iterator end() const { return (std::stack<T>::c.end()); }
};

#endif
