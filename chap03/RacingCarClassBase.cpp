#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST {
	enum
	{
		ID_LEN=20, MAX_SPD=200,FUEL_STEP=2,
		ACC_STEP=10,BRK_STEP=10
	};
}
class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char* ID, int fuel);
	void ShowCarstate();
	void Accel();
	void Break();
};
void InitMembers(char* ID, int fuel) {

}
int main(void)
{

	return 0;
}