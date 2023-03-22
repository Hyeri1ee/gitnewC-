#pragma once
#include "Point.h"
#include <iostream>
class Circle {
private:
	Point p;
	int rad;
public:
	Circle(Point p1, int r)
		:p(p1), rad(r)
	{

	}
	void ShowCircleInfo() const
	{
		cout << "중심 좌표 : ";
		p.ShowPointInfo();
		cout << "반지름 : ";
		cout << rad << endl;
	}
};