#include <iostream>
using namespace std;
class Point {
public:
	int x;
	int y;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo();
};
void Rectangle::ShowRecInfo()
{
	cout << "�� ��� : " << '[' << upLeft.x << ",";
	cout << upLeft.y << "]" << endl;
	cout << "�� �ϴ� : " << "[" << lowRight.x << ",";
	cout << lowRight.y << "]" << endl;
}
int main(void)
{

	return 0;
}