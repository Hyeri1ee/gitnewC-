#include <iostream>
#include <cstring>
using namespace std;
class Printer
{
private:
	char string[30];

public:
	void saveString(char* s);
	void printString();
};
void Printer::saveString(char* s)
{
	strcpy_s(string, s);
	cout << "���ڿ��� ������ �Ϸ� �Ǿ����ϴ�." << endl;
}
void Printer::printString()
{
	cout << "����� ���ڿ��� : " << string << "�Դϴ�." << endl;
}

int main(void)
{
	Printer ptn;
	char* input;
	char buffer[30];
	input = buffer;
	cout << "30�� ������ ���ܾ �Է��ϼ��� : ";
	cin >> input;

	ptn.saveString(input);
	ptn.printString();

	return 0;
}