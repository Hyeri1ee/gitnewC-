#include <iostream>
using namespace std;
void counter() {
	static int cnt;
	cnt++;
	cout << "current cnt : " << cnt << endl;
}
int main(void)
{
	for (int i = 0; i < 10; i++)
		counter();
	return 0;
}