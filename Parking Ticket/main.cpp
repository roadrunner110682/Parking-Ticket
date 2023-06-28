//Name: Andrew Ohlsen
//Program: A7 "Parking Ticket Simulator"
//Date: 4-20-2018
//Summary: This program will allow a police officer to examine a parking spot's
//parking meter and will allow the officer to issue a parking ticket, if necessary.

#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

using namespace std;

int main()
{
	string name;
	string badge;
	int choice;
	ParkedCar one("Hyundai", "Tucson", "Black", "374HOE", 40);
	ParkedCar two("Toyota", "Sequoia", "Silver", "561PVE", 180);
	ParkingMeter one(60);
	ParkingMeter two(60);

	cout << "Welcome to your Parking Ticket Simulator!\n" << endl;
	cout << "Please enter your last name: ";
	cin >> name;
	cout << "\nPlease enter your badge number: ";
	cin >> badge;
	PoliceOfficer cop(name, badge);

	do
	{
		cout << "\n\nPlease select an option\n" << endl;
		cout << "1) Examine parking spot" << endl;
		cout << "2) Issue Ticket" << endl;
		cout << "3) Quit" << endl;
		cin >> choice
	} while (choice != 3);

		return 0;
}
