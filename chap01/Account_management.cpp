#include <iostream>
void menu(void) { //menu 출력 함수
	std::cout << "----Menu----" << std::endl;
	std::cout << "1. 계좌개설" << std::endl;
	std::cout << "2. 입금" << std::endl;
	std::cout << "3. 출금 " << std::endl;
	std::cout << "4. 계좌정보 전체 출력" << std::endl;
	std::cout << "5. 프로그램 종료" << std::endl;
	std::cout << "선택: ";
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