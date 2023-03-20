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
	if (money < 0)
		cout << "0���� ���� �ݾ��� ������ �� �����ϴ�." << endl;
	int num = money / APPLE_PRICE;
	numofApples -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowSalesResult() const
{
	cout << "���� ��� : " << numofApples << endl;
	cout << "�Ǹ� ���� : " << myMoney << endl;
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
	if (money < 0)
		cout << "0���� ���� �ݾ��� ������ �� �����ϴ�." << endl;

	myMoney = money;
	numofApples = 0;
}
void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	numofApples += seller.SaleApples(money);
	myMoney -= money;
}
void FruitBuyer::showBuyResult() const;
{
	cout << "���� �ܾ�: " << myMoney << endl;
	cout << "��� ����: " << numofApples << endl;
}

int main(void)
{
	FruitSeller  seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ : " << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ : " << endl;
	buyer.showBuyResult();
	return 0;
}