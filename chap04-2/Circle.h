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
		cout << "�߽� ��ǥ : ";
		p.ShowPointInfo();
		cout << "������ : ";
		cout << rad << endl;
	}
};