#include "iter.hpp"

void plusOne(int &arr)
{
	arr += 1;
}

void power(int &arr)
{
	arr *= arr;
}

void toUpper(char &c)
{
	c -= 32;
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	iter(&arr[2], 3, power);
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	char str[6] = "water";
	iter(&str[2], 3, toUpper);
	for (int i = 0; i < 5; i++)
		std::cout << str[i] ;
}