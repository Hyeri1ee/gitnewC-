#include <iostream>
int main(void)
{
	char name[50];
	char phone[30];

	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> name;
	std::cout << " ��ȭ��ȣ�� �Է��ϼ��� : ";
	std::cin >> phone;
	std::cout << "�̸� = " << name << " ��ȭ��ȣ = " << phone << std::endl;
	
	return 0;
}