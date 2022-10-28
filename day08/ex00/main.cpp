#include "easyfind.hpp"
#include <vector>
#include <array>

int main()
{
	std::vector<int> v;
	v.push_back(12);
	v.push_back(78);
	v.push_back(1);
	v.push_back(128);
	std::cout << easyfind(v, 2) << std::endl;

	std::array<int , 5> arr ;
	arr[0] = 278;
	arr[1] = 8;
	arr[2] = 28;
	arr[3] = 0;
	arr[4] = 77;


	std::cout << easyfind(arr, 0) << std::endl;

	return (0);
}