#include <iostream>
using namespace std;
int main(void) {
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	//포인터 참조 정의
	int& ref = num;
	int* (&pref) = ptr;
	int** (dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}