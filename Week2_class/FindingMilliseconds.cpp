#include <iostream>
#include <ctime>
#include <chrono>

void run_func() {
	long sum = 0;
	for (auto i = 0; i < 1000000; i++) {
		sum++;
		std::cout << ".";
	}
}
using namespace std;

int main() {

	//check out start time
	chrono::system_clock::time_point StartTime = chrono::system_clock::now();

	run_func();
	//check out end time
	chrono::system_clock::time_point EndTime = chrono::system_clock::now();
	chrono::milliseconds mill = chrono::duration_cast<chrono::milliseconds>(EndTime - StartTime);
	cout << "for문 실행 시간(milliseconds) : " << mill.count() << endl;
	return 0;
}