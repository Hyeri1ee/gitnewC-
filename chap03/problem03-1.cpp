#include <iostream>
struct Point {
	int xpos;
	int ypos;

	void MovePos(int x, int y);//점의 좌표이동
	void AddPoint(const Point& pos); //점의 좌표증가
	void ShowPosition(); //현재 x,y 좌표정보 출력
};
int main(void)
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20.20 };
	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); //[5,14]출력

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); //[25,44]출력
	return 0;
}
void Point::MovePos(int x, int y) {
	xpos = xpos + x;
	ypos = ypos + y;
}
void Point::AddPoint(const Point& pos) {
	xpos = xpos + pos.xpos;
	ypos = ypos + pos.ypos;
}
void Point::ShowPosition() {
	std::cout << "[" << xpos << " " << ypos << "]" << std::endl;
}