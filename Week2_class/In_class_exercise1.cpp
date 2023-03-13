#include <iostream>
#include "declare.h"

int main(void)
{
	//case1 ) arr1[] = { 10,4,3,50,23,90 }
	int arr1[] = { 10,4,3,50,23,90 };
	print2largest(arr1, sizeof(arr1) / sizeof(int));
	int first, second;
	get2largest(arr1, sizeof(arr1) / sizeof(int), &first, &second);
	std::cout << "Output: " << first<<", " << second << "\n"<<std::endl;

	//case2 ) arr2 = {99,77,11,15,88,1}
	int arr2[] = { 99,77,11,15,88,1 };
	print2largest(arr2, sizeof(arr2) / sizeof(int));

	get2largest(arr2, sizeof(arr2) / sizeof(int), &first, &second);
	std::cout << "Output: " << first << ", " << second << "\n" << std::endl;

	//case3 ) arr3 = {10,9636,2401,777,2080,1,50}
	int arr3[] = { 10,9636,2401,777,2080,1,50 };
	print2largest(arr3, sizeof(arr3) / sizeof(int));
	get2largest(arr3, sizeof(arr3) / sizeof(int), &first, &second);
	std::cout << "Output: " << first << ", " << second << "\n" << std::endl;
	return 0;
}
