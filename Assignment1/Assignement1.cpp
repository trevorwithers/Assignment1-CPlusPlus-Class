#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*
	Trevor Withers - Assigment 1 - Calculate total charge for Awesome Car Rentals
	by multiplying the total miles by the base and adding it to the number of days multiplied by the daily charge
*/
int main()
{
	//House Keeping
	const int DAILYCHARGE = 15;
	const double BASEMILEAGEFEE = 0.12;
	string customerName;
	int beginningOdometer;
	int endingOdometer;
	int milesDriven;
	int numberOfDays;
	double total;

	//User Input
	cout << "Enter your name and then press enter: ";
	getline(cin, customerName);
	cout << "Enter your starting odometer and then press enter: ";
	cin >> beginningOdometer;
	cout << "Enter your ending odometer and then press enter: ";
	cin >> endingOdometer;
	cout << "Enter the number of days you used the vehicle and then press enter: ";
	cin >> numberOfDays;

	//Processing and Calculation
	milesDriven = endingOdometer - beginningOdometer;
	total = (milesDriven * BASEMILEAGEFEE) + (numberOfDays * DAILYCHARGE);


	//Output
	cout << fixed << setprecision(2);
	cout << endl << endl << setw(50) << "Awesome Car Rentals" << endl;
	cout << left << setw(20) << "Customer Name "
		<< setw(20) << " # of Days "
		<< right << setw(20) << " Miles Driven "
		<< setw(20) << " Charge " << endl << endl;

	cout << left << setw(20) << customerName
		<< setw(20) << numberOfDays
		<< right << setw(20) << milesDriven
		<< setw(20) << total << endl << endl;

	system("pause");

	/*
		Enter your name and then press enter: Trevor Withers
		Enter your starting odometer and then press enter: 110000
		Enter your ending odometer and then press enter: 110500
		Enter the number of days you used the vehicle and then press enter: 10


									   Awesome Car Rentals
		Customer Name        # of Days                 Miles Driven              Charge

		Trevor Withers      10                                   500              210.00

		Press any key to continue . . .
	*/
}