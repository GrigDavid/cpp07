#include "iter.hpp"
#include <iostream>

int main()
{
	
	int intArray[] = {1, 2, 3, 4, 5};
	const int intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original int array: ";
	for (int i = 0; i < intArrayLength; ++i)
		std::cout << intArray[i] << " ";
	std::cout << std::endl;

	iter<int>(intArray, intArrayLength, [](int &n) { n *= 2; });

	std::cout << "Modified int array: ";
	for (int i = 0; i < intArrayLength; ++i)
		std::cout << intArray[i] << " ";
	std::cout << std::endl;

	return 0;
}
