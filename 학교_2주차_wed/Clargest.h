#pragma once
class CLargest {
private:
	int arr[];
	int arr_len;
	int first;
	int second;
public:
	CLargest(int arr[]);
	void findLargest(int arr[], int arr_len);
	void findLargestTwo(int arr[], int arr_len,int* first, int* second);
	
};