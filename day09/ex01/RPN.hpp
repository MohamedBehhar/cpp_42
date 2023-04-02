#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>

class RPN
{
private:
	std::string _str;
	std::stack<int> _stack;

public:
	RPN();
	RPN(std::string str);
	~RPN();
	RPN(RPN const &src);
	RPN &operator=(RPN const &rhs);
	void fill_stack();
	void parse();
};

#endif