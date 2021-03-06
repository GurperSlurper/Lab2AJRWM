//***********************************************************************************
//			CPSC 230 TR	Fall 2020			Lab 2A
// Jacob Robins
// William McCormick
// Calculates Acceleration Based on User input of velocity and Time
// 
//***********************************************************************************

/*
*Our Algorithm
* 1. We need to create a calculator that finds acceleration 
*	 with a given formula in meters per second squared
* 2. MPH2MPS= 1609 / 3600
*	 a= accel = vel / userTime
*	 v= velocity in milers per hour ; user input (vel)
*	 t= time in seconds ; user input (userTime)
*	 constant double= MPH2MPS = 1609 / 3600	
*	 converts miles per hour to meters per second
* 3. Prompt for vel
*	 Prompt for userTime
* 4. Receive vel
*	 Receive userTime
* 5. Doubles are input into given rounding formula
*	 accel x MPH2MPS 
*	 Answer is calculated in meters per second squared
*	 Answer is then rounded to two decimal places
*	 Final answer is given
* 6. Final answer (accel) is given
*/	

#include <iostream>
#include <iomanip>
using namespace std;

double MPH2MPS = 1609.0 / 3600.0;

int main()
{
	//Variables
	double vel; //user inputted velocity
	double userTime; //user inputter time
	double num; //will contain the calculated acceleration

	//Input
	cout << "		Acceleration calculator		\n\n\n";
	cout << "Please enter the velocity in miles per hour: ";
	cin >> vel;
	cout << "Please enter the time in seconds: ";
	cin >> userTime;
	cout << endl;

	//Calculation
	//Rounds MPH2MPS to two decimals
	/*MPH2MPS *= 100;
	MPH2MPS += 0.5;
	int MPH2MPS_Round = static_cast<int>(MPH2MPS);
	MPH2MPS = static_cast<double>(MPH2MPS_Round) / 100;\
	*/
	
	//Rounds accel to two decimals
	num = vel / userTime;
	num*= MPH2MPS;
	num *= 10;
	num += 0.5;
	int num1 = static_cast<int>(num);
	accel = static_cast<double>(num) / 10;


	//Output
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "The acceleration required by a vehicle to reach\na velocity of ";
	cout << vel << " miles per hour in " << userTime;
	cout << " seconds\n" << "is " << accel << " meters per second squared" <<endl;

	return 0;
}