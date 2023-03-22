#include <iostream>
#include <cassert>
using namespace std;
class Rectangle
{
private:
	double length;
	double height;

public:
	Rectangle(double length, double height);
	Rectangle(const Rectangle& rect);
	Rectangle();
	~Rectangle(); //destructor
	void print() const;
	double getArea() const;
	double getPerimeter() const;
};
Rectangle::Rectangle() {

}
Rectangle::Rectangle(double len, double hgt)
	:length(len), height(hgt)
{
	if ((length <= 0.0) || (height <= 0.0))
	{
		cout << "No rectangle can be made!" << endl;
		//assert(false);;

	}
}
Rectangle::Rectangle(const Rectangle& rect)
	: length(rect.length), height(rect.height)
{

}
Rectangle :: ~Rectangle()
{

}
void Rectangle::print() const
{
	cout << " a rectangle of " << length << "by" << height << endl;
}
double Rectangle::getArea() const
{
	return (length * height);
}
double Rectangle::getPerimeter() const
{
	return 2 * (length + height);
}
/*************/
int main(void)
{
	/*
	Rectangle rect1(3.0, 4.2);
	Rectangle rect2(5.1, 10.2);
	Rectangle rect3(rect2);

	cout << "Rectangle 1 :";
	rect1.print();
	cout << "Area : " << rect1.getArea() << endl;
	cout << "Perimeter : " << rect1.getPerimeter() << endl << endl;

	cout << "Rectangle 2 :";
	rect2.print();
	cout << "Area : " << rect2.getArea() << endl;
	cout << "Perimemter : " << rect2.getPerimeter() << endl << endl;

	cout << "Rectangle 3 :";
	rect3.print();
	cout << "Area : " << rect3.getArea() << endl;
	cout << "Perimemter : " << rect3.getPerimeter() << endl << endl;
	*/
	Rectangle rec1(-3.0, 4.2); //1. runtime error / assert /remove
	Rectangle rect0;
	rect0.print();//2. compile error / rect0 
	//Rectangle rect0;
}