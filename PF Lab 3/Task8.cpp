#include <iostream>
using namespace std;
main (){
	float volt;
	cout << "Enter voltage (in volts): ";
	cin >> volt;
 	int curr;
	cout << "Enter current (in amperes): ";
	cin >> curr;
	float power;
	power = volt * curr;
	cout << "The power is " << power << " watts.";
	}
