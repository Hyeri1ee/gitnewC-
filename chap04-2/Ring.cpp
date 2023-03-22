#include "Circle.h"
#include <iostream>
using namespace std;
class Ring {
private:
	Circle c1, c2;
public:
	Ring(Circle j, Circle k)
		:c1(j), c2(k)
	{

	}
	void ShowRingInfo() const
	{
		c1.ShowCircleInfo();
		c2.ShowCircleInfo();

	}
};
int main(void)
{
	Point p1(1, 3);
	Point p2(8, 10);
	Circle c1(p1, 8);
	Circle c2(p2, 3);
	Ring r1(c1, c2);
	r1.ShowRingInfo();
	return 0;
}