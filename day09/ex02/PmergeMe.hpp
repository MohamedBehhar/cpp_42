#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

class PmergeMe
{
private:
	std::vector<int> numbers;

public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &rhs);
	~PmergeMe();

	void addNumber(int number);
	void mergeSort();
	void mergeSort(std::vector<int> &numbers);
	void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &numbers);
	void printNumbers();
};
bool isDigit(std::string str);

#endif