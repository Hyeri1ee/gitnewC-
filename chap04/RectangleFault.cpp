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
	cout << "좌 상단 : " << '[' << upLeft.x << ",";
	cout << upLeft.y << "]" << endl;
	cout << "우 하단 : " << "[" << lowRight.x << ",";
	cout << lowRight.y << "]" << endl;
}
int main(void)
{

	return 0;
}