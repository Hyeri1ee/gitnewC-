#include <iostream>
#include "Rectangle.h"

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > ul.GetY())
	{
		cout << "잘못된 위치 정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}
void Rectangle::ShowRecInfo() const {
	cout << "좌 상단: " << "[" << upLeft.GetX() << ",";
	cout << upLeft.GetY() << "]" << endl;
	cout << "우 하단: " << "[" << lowRight.GetX() << ",";
	cout << lowRight.GetY() << "]" << endl;
	cout << "완료" << endl;
}