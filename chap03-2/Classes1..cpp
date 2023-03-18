#include <iostream>
#include "Classes1.h"
using namespace std;

class Classes1 {
private:
	double a, b;
	int addnum, minnum, divnum, mulnum;
public:
	double Add(double a, double b);
	double Min(double a, double b);
	double Div(double a, double b);
	double Mul(double a, double b);
	void Init();
	void show();
};
double Classes1::Add(double a, double b)
{
	addnum++;
	return (a + b);
}
double Classes1::Min(double a, double b)
{
	minnum++;
	return (a - b);
}
double Classes1::Div(double a, double b)
{
	divnum++;
	return a / b;
}
double Classes1::Mul(double a, double b)
{
	mulnum++;
	return a * b;
}
void Classes1::Init()
{
	addnum = 0;
	minnum = 0;
	divnum = 0;
	mulnum = 0;

}
void Classes1::show()
{
	cout << "µ¡¼À : " << addnum;
	cout << "»¬¼À : " << minnum;
	cout << "³ª´°¼À : " << divnum;
	cout << "°ö¼À : " << mulnum;

}

int main(void)
{
	Classes1 cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 * 1.2 = " << cal.Mul(4.9, 1.2) << endl;
	return 0;
}