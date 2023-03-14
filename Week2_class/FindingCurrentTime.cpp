#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
	//finding elapsed seconds and current second
	long elapsedSeconds = time(0);
	int currentSecond = elapsedSeconds % 60;
	//finding elapsed minutes and current minute
	long elapsedMinutes = elapsedSeconds / 60;
	int currentMinute = elapsedMinutes % 60;
	//finding elapsed hours and current hour
	long elapsedHours = elapsedMinutes / 60;
	int currentHour = elapsedHours % 24;
	//printing current time
	cout << "Current Time : ";
	cout << currentHour << " : ";
	cout << currentMinute << " : ";
	cout << currentSecond;
	return 0;
}