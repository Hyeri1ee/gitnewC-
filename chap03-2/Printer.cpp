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
	cout << "문자열이 저장이 완료 되었습니다." << endl;
}
void Printer::printString()
{
	cout << "저장된 문자열은 : " << string << "입니다." << endl;
}

int main(void)
{
	Printer ptn;
	char* input;
	char buffer[30];
	input = buffer;
	cout << "30자 이하의 영단어를 입력하세요 : ";
	cin >> input;

	ptn.saveString(input);
	ptn.printString();

	return 0;
}