#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person() {
		name = NULL;
		age = 0;
		cout << "called person." << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo()const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor" << endl;
	}
};
int main(void)
{
	Person p[3];
	char namestr[100];
	char* ptrstr;
	int age;
	int len;
	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		len = strlen(namestr) + 1;
		ptrstr = new char[len];
		strcpy(ptrstr, namestr);
		p[i].SetPersonInfo(ptrstr, age);
	}
	cout << "\n";
	p[0].ShowPersonInfo();
	p[1].ShowPersonInfo();
	p[2].ShowPersonInfo();

	return 0;
}