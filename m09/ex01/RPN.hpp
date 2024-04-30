#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class RPN
{
private:
	std::string equation;
	int	position;
	std::stack<double> stack;

	RPN();
	RPN(RPN const& copy);
	RPN &operator=(RPN const& copy);


public:
	int getPosition() const;
	char getCharacter(int i) const;
	RPN(const char *str);
	~RPN();
	
	class Error : public std::runtime_error {
	public:
		int position;
		Error(const std::string& message, int position)
			: std::runtime_error(message), position(position) {}
	};
};

#endif