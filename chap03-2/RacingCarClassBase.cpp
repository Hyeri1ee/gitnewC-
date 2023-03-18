#include <iostream>
#include <cstring>

using namespace std;
namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10

	};
}

class Car {
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void showCarState(); //상태정보 출력
	void Accel(); //엑셀, 속도증가
	void Break(); //브레이크,속도 감소

};

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::showCarState() {
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel() {
	if (fuelGauge < 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	curSpeed += CAR_CONST::ACC_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
}
void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP)
		curSpeed = 0;
	curSpeed -= CAR_CONST::BRK_STEP;
}
int main(void)
{
	//Car run99 = { "run99",100,0 }; //구조체 변수
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.showCarState();
	run99.Break();
	run99.showCarState();
	return 0;
}