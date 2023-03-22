#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
namespace rank_info {
	enum {
		CLERK, //���
		SENIOR, //����
		ASSIST, //�븮
		MANAGER //����
	};

	void ShowPositionInfo(int pos)
	{
		switch (pos) {
		case CLERK:
			cout << "���" << endl; break;
		case SENIOR:
			cout << "����" << endl; break;
		case ASSIST:
			cout << "�븮" << endl; break;
		case MANAGER:
			cout << "����" << endl; break;
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
	
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		cout << "���� : ";
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
	NameCard manClerk("Hyeri", "īī��", "010-7626-3626", rank_info::MANAGER);
	manClerk.ShowNameCardInfo();
	return 0;
}