#include <iostream>
#include <array>
#include <string>
#include "Clargest.h"
int CLargest::findLargest(int s[])
{
	int max = INT_MIN;
	for (int i = 0; i < sizeof(s) / sizeof(int); i++) {
		if (s[i] > max)
		{
			max = s[i];
		}
	}
	firstLarge = max;
	return firstLarge;
}
void CLargest::findLargestTwo(int s[])
{
	//first largest number
	firstLarge = findLargest(s);
	//second largest number
	int max = INT_MIN;
	for (int i = 0; i < sizeof(s) / sizeof(int); i++)
	{
		if ((s[i] > max) && (s[i] < firstLarge))
		{
			max = s[i];
			continue;
		}
	}
	secondLarge = max;
	cout << "findlargestTwo()" << endl;
	cout << "first largest number : " << firstLarge << endl;
	cout << "second largest number : " << secondLarge << endl;
}