#ifndef __CLASSES1_H__
#define __CLASSES1_h__
class Classes {
private:
	double a, b;
	int addnum, minnum, divnum, mulnum;
public:
	void Add(double a, double b);
	void Min(double a, double b);
	void Div(double a, double b);
	void Mul(double a, double b);
	void Init();
	void show();
};
#endif