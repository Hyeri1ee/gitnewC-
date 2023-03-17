#include <iostream>
struct Point {
	int xpos;
	int ypos;

	void MovePos(int x, int y);//���� ��ǥ�̵�
	void AddPoint(const Point& pos); //���� ��ǥ����
	void ShowPosition(); //���� x,y ��ǥ���� ���
};
int main(void)
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20.20 };
	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); //[5,14]���

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); //[25,44]���
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