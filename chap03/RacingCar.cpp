#include <iostream>
using namespace std;
namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP=10

	};
}
struct Car {
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState() {
		cout << "소유자ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재속도 : " << curSpeed << "km/s" << endl<<endl;
	}

	void Accel() {
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};
int main(void)
{
	Car run00 = { "run00",100,0 };
	run00.Accel();
	run00.Accel();
	run00.ShowCarState();
	run00.Break();
	run00.ShowCarState();

	return 0;
}