#include <iostream>
void menu(void) { //menu ��� �Լ�
	std::cout << "----Menu----" << std::endl;
	std::cout << "1. ���°���" << std::endl;
	std::cout << "2. �Ա�" << std::endl;
	std::cout << "3. ��� " << std::endl;
	std::cout << "4. �������� ��ü ���" << std::endl;
	std::cout << "5. ���α׷� ����" << std::endl;
	std::cout << "����: ";
}
void makeAccount() {

}
int main(void)
{
	int choice;

	while (1) {
		menu();
		std::cin >> choice;
		switch (choice) {
			case 1:
				makeAccount();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default://choice > 5 || choice < 1
				continue;
		}
	}
	return 0;
}