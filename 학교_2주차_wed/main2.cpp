#include <iostream>
#include "Clargest.h"
using namespace std;
int main(void)
{
	CLargest k;
	int arr[] = {1,3,2,4,34,6,8,12};
	//first largest number
	cout << "findLargest(): "<<k.findLargest(arr) <<endl;
	//first largest number and second largest number
	k.findLargestTwo(arr);

	return 0;
}