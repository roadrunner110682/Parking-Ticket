//ParkedCar Class header

#ifndef PARKED_CAR
#define PARKED_CAR
#include <string>
using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	string license;
	int minsParked;
public:
	ParkedCar()
	{
		make = "";
		model = "";
		color = "";
		license = "";
		minsParked = 0;
	}
	ParkedCar(string a, string b, string c, string d, int e)
	{
		make = a;
		model = b;
		color = c;
		license = d;
		minsParked = e;
	}
	void setMake(string a)
	{
		make = a;
	}
	void setModel(string b)
	{
		model = b;
	}
	void setColor(string c)
	{
		color = c;
	}
	void setLicense(string d)
	{
		license = d;
	}
	void setMinsParked(int e)
	{
		minsParked = e;
	}
	string getMake() const
	{
		return make;
	}
	string getModel() const
	{
		return model;
	}
	string getColor() const
	{
		return color;
	}
	string getLicense() const
	{
		return license;
	}
	int getMinsParked() const
	{
		return minsParked;
	}
};
#endif

