#include <iostream>
int func1(int& num) {
	return num + 1;
}
int func2(int& num) {
	return num * (-1);
}
int main(void)
{
	int k = 9;
	std::cout << func1(k) << std::endl;
	std::cout << func2(k) << std::endl;
	return 0;
}