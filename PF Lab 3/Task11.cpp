#include <iostream>
using namespace std;
main (){ 
	int pop;
	cout << "Enter the current world population: ";
	cin >> pop;
	int br;
	cout << "Enter the monthly birth rate (number of births per month): ";
	cin >> br;
	int btd;
	btd = ((br * 12) * 30) + pop;
	cout << "The population in three decades will be: " << btd ;
	}