#include <iostream>
using namespace std;
main (){
	float charge;
	cout << "Enter the charge (Q) in Coulombs: " ;
	cin >> charge;
	float time;
	cout << "Enter the time (t) in seconds: ";
	cin >> time;
	float current;
	current = charge / time;
	cout << "The current (I) is: " << current << " Amperes" << endl;
 	}
	