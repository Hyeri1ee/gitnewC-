#include <iostream>
void SwapPointer(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	std::cout << "���� : num1 : " << *ptr1 << " num2 : " << *ptr2 << std::endl;
	SwapPointer(ptr1, ptr2);
	std::cout << "�ٲ��� : num1 : " << *ptr1 << " num2 : " << *ptr2 << std::endl;
	return 0;
}