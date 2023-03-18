#include <iostream>
using namespace std;
class FruitSeller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	int SaleApples(int money);
	void ShowSalesResult();
	void InitMembers(const int apple_price, int numberofapples, int money);
};
int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numofApples -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowSalesResult()
{
	cout << "남은 사과 : " << numofApples << endl;
	cout << "판매 수익 : " << myMoney << endl;
}
void FruitSeller::InitMembers(int apple_price, int numberofapples, int money)
{
	myMoney = money;
	numofApples = numberofapples;
	APPLE_PRICE = apple_price;
}

class FruitBuyer
{
private:
	int myMoney;
	int numofApples;
public:
	void InitMembers(int money);
	void BuyApples(FruitSeller& seller, int money);
	void showBuyResult();
};
void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numofApples = 0;
}
void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	numofApples += seller.SaleApples(money);
	myMoney -= money;
}
void FruitBuyer:: showBuyResult()
{
	cout << "현재 잔액: " << myMoney << endl;
	cout << "사과 개수: " << numofApples << endl;
}

int main(void)
{
	FruitSeller  seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황 : " << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황 : " << endl;
	buyer.showBuyResult();
	return 0;
}