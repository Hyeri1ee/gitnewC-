#include <iostream>
int main(void)
{
	double price;
	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
		std::cin >> price;
		if (price == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
		else
		{
			price = 50 + 0.12 * price;
		}
		std::cout << "�̹� �� �޿�: " << price<<"����"<<std::endl;

	}
	return 0;

}