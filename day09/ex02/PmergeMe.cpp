#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	*this = src;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	if (this != &rhs)
	{
		this->numbers = rhs.numbers;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::addNumber(int number)
{
	this->numbers.push_back(number);
}

void PmergeMe::mergeSort()
{
	this->mergeSort(this->numbers);
}

void PmergeMe::mergeSort(std::vector<int> & numbers)
{
	if (numbers.size() <= 1)
		return;
	std::vector<int> left;
	std::vector<int> right;
	int middle = (numbers.size() + 1) / 2;
	for (int i = 0; i < middle; i++)
		left.push_back(numbers[i]);
	for (int i = middle; i < (int)numbers.size(); i++)
		right.push_back(numbers[i]);
	this->mergeSort(left);
	this->mergeSort(right);
	this->merge(left, right, numbers);
}

void PmergeMe::merge(std::vector<int> & left, std::vector<int> & right, std::vector<int> & numbers)
{
	int leftIndex = 0;
	int rightIndex = 0;
	int numbersIndex = 0;
	while (leftIndex < (int)left.size() && rightIndex < (int)right.size())
	{
		std::cout << "---------------------" << std::endl;
		std::cout << left[leftIndex] << " " << right[rightIndex] << std::endl;
		std::cout << "---------------------" << std::endl;
		if (left[leftIndex] < right[rightIndex])
		{
			numbers[numbersIndex] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			numbers[numbersIndex] = right[rightIndex];
			rightIndex++;
		}
		numbersIndex++;
	}
	while (leftIndex < (int)left.size())
	{
		numbers[numbersIndex] = left[leftIndex];
		leftIndex++;
		numbersIndex++;
	}
	while (rightIndex < (int)right.size())
	{
		numbers[numbersIndex] = right[rightIndex];
		rightIndex++;
		numbersIndex++;
	}
}

void PmergeMe::printNumbers()
{
	for (int i = 0; i < (int)this->numbers.size(); i++)
		std::cout << this->numbers[i] << " ";
	std::cout << std::endl;
}


bool isDigit(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}
