#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
private:
	std::vector<int> numbers;
	std::vector<int> beforeSort;
	std::deque<int> dequeNumbers;
	clock_t vec_start;
	clock_t vec_end;
	clock_t deque_start;
	clock_t deque_end;

public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &rhs);
	~PmergeMe();
	void addNumber(int number);
	void addDequeNumber(int number);
	void mergeSort();
	void mergeSort(std::vector<int> &numbers, std::string indent);
	void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &numbers);
	void printNumbers();
	void mergeSortDeque(std::deque<int> &numbers, std::string indent);
	void mergeSortDeque();
	void mergeDeque(std::deque<int> &left, std::deque<int> &right, std::deque<int> &numbers);
	void printOutput();
};
bool isDigit(std::string str);

#endif