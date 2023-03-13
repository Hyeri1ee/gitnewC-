#include <iostream>
int main(void)
{
	//SimpleFunc(); 호출 할때, 두 함수 조건 모두 만족.
	return 0;
}
int SimpleFunc(int a = 10) {
	return a + 1;
}
int SimpleFunc(void) {
	return 10;
}