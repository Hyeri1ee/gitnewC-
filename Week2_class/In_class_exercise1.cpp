#include <iostream>
void print2largest(int arr[], int arr_len);
void get2largest(int arr[], int arr_len, int* first, int* second);
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
void print2largest(int arr[], int arr_len)
{
	std::cout << "Input: arr[] = {";
	for (int i = 0; i < arr_len; i++) {
		if (i != arr_len - 1)
			std::cout << arr[i] << ", ";
		else
			std::cout << arr[i] << "}\n";
	}

}
void get2largest(int arr[], int arr_len, int* first, int* second) //by bubble sort
{
	for (int i = 0; i < arr_len; i++)
	{
		for (int j = 0; j < arr_len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	*first = arr[arr_len - 1];
	*second = arr[arr_len - 2];
}