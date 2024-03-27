#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <sstream>

class whatNotFound: public std::exception {
private:
    std::string _message;
public:
    whatNotFound(int whaat) {
        std::ostringstream oss;
        oss << "❕ " << whaat << " Not Found!";
        _message = oss.str();
    }
    virtual const char* what() const throw() {
        return _message.c_str();
    }
    virtual ~whatNotFound() throw() {}
};

template <typename T>
int& easyfind(T& where, int what) {
    typename T::iterator it = std::find(where.begin(), where.end(), what);
    if (it == where.end()) {
        throw whatNotFound(what);
    }
    return *it;
}

#endif
