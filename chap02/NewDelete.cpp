#include <iostream>
#include <string.h>
using namespace std;
char* MakeStrAdr(int len) {
	char* str = new char[len];
	return str;
}
int main(void)
{
	char* str =MakeStrAdr(20);
	strcpy(str, "i am so happyss");
	cout << str << endl;
	delete[]str;
	return 0;
}