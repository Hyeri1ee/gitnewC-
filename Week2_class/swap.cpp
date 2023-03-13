#include <iostream>
void swap1(int& a, int& b) {
	//pass by reference
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int* a, int* b) {//pass by pointer 
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a = 10;
	int b = 30;
	std::cout << "not exchanged a , b :" << a<<": "<<b << std::endl;
	swap1(a, b);
	std::cout << "exchanged a , b :" << a << ": " << b << std::endl;
	std::cout << "not exchanged a , b :" << a << ": " << b << std::endl;
	swap2(&a, &b);
	std::cout << "exchanged a , b :" << a << ": " << b << std::endl;
	return 0;
}