//Police Officer Class Header

#ifndef POLICE_OFFICER
#define POLICE_OFFICER
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <iostream>
#include <string>
using namespace std;

class PoliceOfficer
{
private:
	string name;
	string badge;
public:
	PoliceOfficer(string a, string b)
	{
		name = a;
		badge = b;
	}
	string getName() const
	{
		return name;
	}
	string getBadge() const
	{
		return badge;
	}
};
#endif
