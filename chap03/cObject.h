#ifndef __COBJECT_H__
#define __COBJECT_H__
#include <iostream>
using namespace std;
class Calculator {
private:
	int numofAdd;
	int numofMin;
	int numofMul;
	int numofDiv;
public:
	void Init();

	void Add(double num1, double num2);
	void Min(double num1, double num2);
	void Mul(double num1, double num2);
	void Div(double num1, double num2);

	void ShowOpCount();
};
inline void Calculator::Add(double num1, double num2) {
	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
}
inline void Calculator::Min(double num1, double num2) {
	cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
}
inline void Calculator::Mul(double num1, double num2) {
	cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}
inline void Calculator::Div(double num1, double num2) {
	cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
}
inline void Calculator :: Init() {
	numofAdd = 0;
	numofDiv = 0;
	numofMin = 0;
	numofMul = 0;
}
inline void Calculator::ShowOpCount() {
	cout << "µ¡¼À : " << numofAdd << " »¬¼À : " << numofMin << " °ö¼À : " << numofMul << " ³ª´°¼À : " << numofDiv << endl;
}
#endif