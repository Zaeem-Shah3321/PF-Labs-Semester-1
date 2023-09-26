#include <iostream>
using namespace std;
void fuel ();
main (){
	fuel ();
	} 
void fuel (){	
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	int fuel_needed;
	fuel_needed = (distance * 10);
	cout << "Fuel needed: "<< fuel_needed ;
}