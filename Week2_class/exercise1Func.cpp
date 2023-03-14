#include <iostream>
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