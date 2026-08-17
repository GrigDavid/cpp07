#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> arr1;
	try
	{
		arr1[0]++;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> arr2(10);

	for (int i = 0; i < 10; i++)
	{
		arr2[i] = i * i + i + 41;
	}
	arr1 = arr2;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "arr1: " << arr1[i] << " ------ arr2: " << arr2[i] << std::endl;
	}
	try
	{
		std::cout << arr1[-1] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> *arr3 = new Array<int>(arr1);
	for (int i = 0; i < 10; i++)
	{
		std::cout << "arr3: " << (*arr3)[i] << std::endl;
	}
	delete arr3;
	return 0;
}
