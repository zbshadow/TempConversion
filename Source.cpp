/*
Program Name: Temperature Conversion
Author: B. Bayless
Date Last Updated: 10/21/2018
Purpose: To convert Celsius to Fahrenheit
*/

#include <iostream>

using namespace std;

int main() {
	int lowTemp;
	int highTemp;

	cout << "Enter the low range number for Conversion: " << endl;
	cin >> lowTemp;
	for (;;) 
	{
		cout << " Please enter the high range number for Conversion: " << endl;
		cin >> highTemp;
		
		if (highTemp <= lowTemp)
		{
			cout << "Please enter a temperature above the low rang temp." << endl;
			cin.clear();
		}
		else 
		{
			break;
		}
	}


	//convert from C to F

	//output the values


	return 0;
}