#include <iostream>
#include <cassert>
using namespace std;
class Rectangle
{
private:
	double length;
	double height;
	static int count;

public:
	Rectangle(double length, double height);
	Rectangle();
	~Rectangle();
	Rectangle(const Rectangle& rect);
	static int getCount()
	{

		return count;
	}
};
Rectangle::Rectangle(double len, double hgt)
	:length(len), height(hgt)
{
	if ((length <= 0.0) || (height <= 0.0))
	{
		cout << "No rectangle can be made!" << endl;
		//assert(false);; //?

	}
	count++;
}
Rectangle::Rectangle(const Rectangle& rect)
	: length(rect.length), height(rect.height)
{
	count++;
}
Rectangle::Rectangle()
{
	height = 0;
	length = 0;
	count++;
}
Rectangle :: ~Rectangle()
{
	count = 0; //count--;
}

/*************/
int Rectangle::count = 0;
int main(void)
{
	{
		Rectangle rect1(3.2, 1.2);
		Rectangle rect2(1.5, 2.1);
		Rectangle rect3;
		Rectangle rect4(rect1);
		Rectangle rec5(rect2);
		cout << "Count of objects : " << rec5.getCount() << endl;
		rec5.~Rectangle();
	}

	cout << "Count of objects : " << Rectangle::getCount() << endl;
	return 0;
}