/*
Program Name: Temperature Conversion
Author: B. Bayless
Date Last Updated: 10/21/2018
Purpose: To convert Celsius to Fahrenheit
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int lowTemp;
	int highTemp;
	int far;
	int i;

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

	i = lowTemp;
	cout << "=====================" << endl;
	cout << left;
	cout << setw(5) << "Celsius" << setw(5) << "Fahrenheit" << endl;
	while (i <= highTemp) 
	{
		far = 9 / 5 * i + 32;
		cout << i << "    " <<  far << endl;
		i = i + 1;
	}

	return 0;
}