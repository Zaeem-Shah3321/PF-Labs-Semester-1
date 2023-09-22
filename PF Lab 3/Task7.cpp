#include <iostream>
using namespace std;
main (){
	float hours;
	cout << "Enter the number of hours: ";
	cin >> hours;
	float seconds;
	seconds = (hours*60*60) ;
	cout << hours << " hours is equivalent to " << seconds << " seconds.";
	}