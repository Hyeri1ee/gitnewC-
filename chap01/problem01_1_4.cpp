#include <iostream>
int main(void)
{
	double price;
	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin >> price;
		if (price == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		else
		{
			price = 50 + 0.12 * price;
		}
		std::cout << "이번 달 급여: " << price<<"만원"<<std::endl;

	}
	return 0;

}