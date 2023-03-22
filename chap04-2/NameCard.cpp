#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
namespace rank_info {
	enum {
		CLERK, //사원
		SENIOR, //주임
		ASSIST, //대리
		MANAGER //과장
	};

	void ShowPositionInfo(int pos)
	{
		switch (pos) {
		case CLERK:
			cout << "사원" << endl; break;
		case SENIOR:
			cout << "주임" << endl; break;
		case ASSIST:
			cout << "대리" << endl; break;
		case MANAGER:
			cout << "과장" << endl; break;
		}

	}
};
class NameCard {
private:
	char* name;
	char* company;
	char* phone;
	int position;
public:
	NameCard(const char* _name, const char* _company, const char* _phone, int pos)
		:position(pos)
	{
		name = new char[strlen(_name) + 1];
		company = new char[strlen(_company) + 1];
		phone = new char[strlen(_phone) + 1];
		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phone, _phone);
	}
	void ShowNameCardInfo() {
	
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		cout << "직급 : ";
		rank_info :: ShowPositionInfo(position);
	}
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};
int main(void)
{
	NameCard manClerk("Hyeri", "카카오", "010-7626-3626", rank_info::MANAGER);
	manClerk.ShowNameCardInfo();
	return 0;
}