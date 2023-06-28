//Parking Meter Class header

#ifndef PARKING_METER
#define PARKING_METER
using namespace std;

class ParkingMeter
{
private:
	int minsPurch;
public:
	ParkingMeter()
	{
		minsPurch = 0;
	}
	ParkingMeter(int a)
	{
		minsPurch = a;
	}
	void setMinsPurch(int a)
	{
		minsPurch = a;
	}
	int getMinsPurch() const
	{
		return minsPurch;
	}
};
#endif
