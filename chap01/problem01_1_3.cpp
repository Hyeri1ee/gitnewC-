#include <iostream>
int main(void)
{
	//숫자 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램 작성
	int num;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> num;
	std::cout << num << "단" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << num << "*" << i + 1 << " = " << num * (i + 1) << std::endl;

	}
	return 0;
}