#include "RPN.hpp"

RPN::RPN(const char *str): equation(str), position(0){
	int right;
	int left;
	int result;

	while (equation[position] != '\0') {
		if (isdigit(equation[position])){
			stack.push(equation[position] - '0');
		} else if (equation[position] == ' '){
			position++;
			continue;
		} else if (equation[position] == '+' 
				|| equation[position] == '-'
				|| equation[position] == '*'
				|| equation[position] == '/'){
			if (stack.size() < 2) {
				throw Error("Not enough numbers for operation!", position);
			}
			right = stack.top();
			stack.pop();
			left = stack.top();
			stack.pop();		
			switch (equation[position]) {
				case '+':
					result = left + right;
					break;
				case '-':
					result = left - right;
					break;
				case '*':
					result = left * right;
					break;
				case '/':
					if (right == 0) 
        				throw Error("Pamietaj cholero nie dziel przez zero!", position);
					result = left / right;
					break;
				default:
					throw Error("This should never happen!", position);
			}
			stack.push(result);
		} else {
			throw Error("Invalid character encountered!", position);
		}
		position++;
	}
}

RPN::~RPN() {
	if (!stack.empty()) {
		if (stack.size() > 1) {
			throw Error("Not enough operators or too many numbers!", position);
		}
		std::cout << equation << GREEN << " = " << stack.top() << RESET << std::endl;
	}
}

int RPN::getPosition() const {
	return position;
}

char RPN::getCharacter(int i) const {
	return equation[i];
}

RPN::RPN(): equation(""), stack() {}

RPN::RPN(RPN const& copy): equation(copy.equation), stack(copy.stack) {}

RPN &RPN::operator=(RPN const& copy) {
	if (this != &copy) {
		equation = copy.equation;
		stack = copy.stack;
	}
	return *this;
}
