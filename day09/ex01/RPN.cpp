#include "RPN.hpp"

RPN::RPN(std::string str)
{
  _str = str;
  parse();
}

RPN &RPN::operator=(RPN const &src)
{
  if (this != &src)
    *this = src;
  return *this;
}

RPN::RPN(RPN const &src)
{
  *this = src;
}

RPN::~RPN() {}

int doOperation(int a, int b, char op)
{
  if (op == '+')
    return a + b;
  else if (op == '-')
    return a - b;
  else if (op == '*')
    return a * b;
  else if (op == '/')
    return a / b;
  return 0;
}

void RPN::check_num_and_push(std::string num)
{
  if (atoi(num.c_str()) > 9)
  {
    std::cout << "Error: num > 10 or < 0\n";
    exit(1);
  }
  else
    _stack.push(atoi(num.c_str()));
}

void RPN::parse()
{
  std::string oper = "+-*/";
  std::string num = "";
  for (size_t i = 0; _str[i]; i++)
  {
    while (_str[i] && isdigit(_str[i]))
    {
      num += _str[i];
      i++;
    }
    if (oper.find(_str[i]) == std::string::npos)
    {
      if (num != "")
        check_num_and_push(num);
      num = "";
    }
    else
    {
      if (_stack.size() < 2)
      {
        std::cout << "Error: Not enough operands" << std::endl;
        exit(1);
      }
      int b = _stack.top();
      _stack.pop();
      int a = _stack.top();
      _stack.pop();
      _stack.push(doOperation(a, b, _str[i]));
    }
  }
  if (_stack.size() > 1)
  {
    std::cout << "Error: Too many operands" << std::endl;
    exit(1);
  }
  std::cout << _stack.top() << std::endl;
}

