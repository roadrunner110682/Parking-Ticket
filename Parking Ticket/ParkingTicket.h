//Parking Ticket Class header

#ifndef PARKING_TICKET
#define PARKING_TICKET
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
#include <iostream>
using namespace std;

class ParkingTicket
{
private:
	ParkedCar vehicle;
	int fine;
	PoliceOfficer cop;
	ParkingMeter info;
	int minsDiff;
public:
	ParkingTicket(ParkedCar a, int b, PoliceOfficer c)
	{
		vehicle = a;
		cop = c;
		minsDiff = (vehicle.getMinsParked() - info.getMinsPurch());
		if (minsDiff > 60)
		{
			fine = (25 + (10 * (minsDiff - 60));
		}
		else
		{
			fine = 25;
		}
	}
	void displayTicket()
	{
		cout << "A ticket issued was for a " << vehicle.getMake() << " " << vehicle.getModel() << "." << endl;
		cout << "The officer issuing the ticket is " << cop.getName() << "." << endl;
		cout << "The badge number is " << cop.getBadge << "." << endl;
	}
};
#endif
