#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
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
	this->beforeSort.push_back(number);
	this->dequeNumbers.push_back(number);
}

void PmergeMe::mergeSort()
{
	vec_start = clock();
	this->mergeSort(this->numbers, "start");
	vec_end = clock();
}

void PmergeMe::mergeSortDeque()
{
	deque_start = clock();
	this->mergeSortDeque(this->dequeNumbers, "start");
	deque_end = clock();
}


void PmergeMe::mergeSortDeque(std::deque<int> &numbers, std::string indent)
{
	if (numbers.size() <= 1)
		return;
	std::deque<int> left;
	std::deque<int> right;
	int middle = (numbers.size() + 1) / 2;
	for (int i = 0; i < middle; i++)
		left.push_back(numbers[i]);
	for (int i = middle; i < (int)numbers.size(); i++)
		right.push_back(numbers[i]);
	this->mergeSortDeque(left, "left");
	this->mergeSortDeque(right, "right");
	this->mergeDeque(left, right, numbers);
}

void PmergeMe::mergeDeque(std::deque<int> &left, std::deque<int> &right, std::deque<int> &numbers)
{

	int leftIndex = 0;
	int rightIndex = 0;
	int numbersIndex = 0;
	while (leftIndex < (int)left.size() && rightIndex < (int)right.size())
	{
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

void PmergeMe::mergeSort(std::vector<int> &numbers, std::string indent)
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
	this->mergeSort(left, "left");
	this->mergeSort(right, "right");
	this->merge(left, right, numbers);
}

void PmergeMe::merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &numbers)
{

	int leftIndex = 0;
	int rightIndex = 0;
	int numbersIndex = 0;
	while (leftIndex < (int)left.size() && rightIndex < (int)right.size())
	{
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

void PmergeMe::printOutput()
{
	clock_t vec_time =  ((double) (vec_end - vec_start)) / CLOCKS_PER_SEC * 1000000;
	clock_t deque_time =  ((double) (deque_end - deque_start)) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Before: ";
	for (int i = 0; i < (int)beforeSort.size(); i++)
		std::cout << beforeSort[i] << " ";
	std::cout << std::endl;
	std::cout << "After: ";
	for (int i = 0; i < (int)dequeNumbers.size(); i++)
		std::cout << dequeNumbers[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of	" << numbers.size() << " elements with std::[vector] : " << vec_time << " us" << std::endl;
	std::cout << "Time to process a range of	" << numbers.size() << " elements with std::[deque] : " << deque_time << " us" << std::endl;
}
