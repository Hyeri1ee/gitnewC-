#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include "Point.h"
using namespace std;
class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif