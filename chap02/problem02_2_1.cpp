#include <iostream>
int main(void)
{
	const int num = 12;
	const int* p1 = &num;
	const int* &ref = p1;

	std::cout << *p1 << std::endl;
	std::cout << *ref << std::endl;
	return 0;
}