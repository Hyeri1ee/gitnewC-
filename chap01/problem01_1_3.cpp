#include <iostream>
int main(void)
{
	//���� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷� �ۼ�
	int num;
	std::cout << "���ڸ� �Է��ϼ��� : ";
	std::cin >> num;
	std::cout << num << "��" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << num << "*" << i + 1 << " = " << num * (i + 1) << std::endl;

	}
	return 0;
}