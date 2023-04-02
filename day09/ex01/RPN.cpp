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

std::vector<std::string> splitString(const std::string &str, char delimiter)
{
  std::vector<std::string> result;
  std::stringstream ss(str);
  std::string token;
  while (getline(ss, token, delimiter))
  {
    result.push_back(token);
  }
  return result;
}

void check_error(std::vector<std::string> vec)
{
    std::string oper = "+-*/";
  for (int i = 0; i < vec.size(); i++)
  {
    if (isdigit(vec[i][0]))
    {
      if (atoi(vec[i].c_str()) < 0 || atoi(vec[i].c_str()) > 9)
      {
        std::cout << "Error" << std::endl;
        exit(1);
      }
    }
    else if (oper.find(vec[i]) == std::string::npos)
    {
      std::cout << "Error" << std::endl;
      exit(1);
    }
  }
}

int doOperation(int a, int b, std::string op)
{
  if (op == "+")
    return a + b;
  else if (op == "-")
    return a - b;
  else if (op == "*")
    return a * b;
  else if (op == "/")
    return a / b;
  return 0;
}

void RPN::parse()
{
  std::vector<std::string> arr = splitString(_str, ' ');
  check_error(arr);
  std::string oper = "+-*/";
  for (size_t i = 0; i < arr.size(); i++)
  {
    if ((oper.find(arr[i]) != std::string::npos) == false)
    {
      _stack.push(atoi(arr[i].c_str()));
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
      _stack.push(doOperation(a, b, arr[i]));
    }
  }
  std::cout << _stack.top() << std::endl;
}
