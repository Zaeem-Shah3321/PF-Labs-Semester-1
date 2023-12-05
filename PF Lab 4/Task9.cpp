#include <iostream>
using namespace std;
void fuel1(int fuel_1);
void fuel2(int fuel_2);
main (){
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
if(distance * 10 > 100)
{ 
	fuel1(distance);
}
if(distance * 10 < 100)
{ 
	fuel2(distance);
}
}
void fuel1(int fu)
{
	fu = fu *10;
	cout << "Fuel needed: " << fu;
}
void fuel2(int fue)
{ 	
	fue = 100;
	cout << "Fuel needed: " << fue;
}
