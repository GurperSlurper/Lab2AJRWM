//***********************************************************************************
//			CPSC 230 TR	Fall 2020			Lab 2A
// Jacob Robins
// William McCormick
// Calculates Acceleration Based on User input of velocity and Time
// 
//***********************************************************************************

/*
* Psuedocode
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	double MPH2MPS = 1609.0 / 3600.0;
	double vel; //user inputted velocity
	double userTime; //user inputter time
	double accel; //will contain the calculated acceleration

	//Input
	cout << "		Acceleration calculator		\n\n\n";
	cout << "Please enter the velocity in miles per hour: ";
	cin >> vel;
	cout << "Please enter the time in seconds: ";
	cin >> userTime;
	cout << endl;

	//Calculation
	//Rounds MPH2MPS to two decimals
	MPH2MPS *= 100;
	MPH2MPS += 0.5;
	int MPH2MPS_Round = static_cast<int>(MPH2MPS);
	MPH2MPS = static_cast<double>(MPH2MPS_Round) / 100;
	
	//Rounds accel to two decimals
	accel = vel / userTime;
	accel *= MPH2MPS;
	accel *= 100;
	accel += 0.5;
	int accelRound = static_cast<int>(accel);
	accel = static_cast<double>(accelRound) / 100;


	//Output
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "The acceleration required by a vehicle to reach\na velocity of " << vel << " miles per hour in " << userTime;
	cout << " seconds\n" << "is " << accel << " meters per second squared" <<endl;
}