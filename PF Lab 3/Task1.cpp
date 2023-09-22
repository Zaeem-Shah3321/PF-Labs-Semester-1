#include <iostream>
using namespace std;
main (){ 
	string name;
	cout << "Enter your name: ";
	cin >> name;
	int rollNumber;
	cout << "Enter your roll number: ";
	cin >> rollNumber;
	float number;
	cout << "Enter your aggregate: ";
	cin >> number;
	char character;
	cout << "Enter your section: ";
	cin >> character;
	cout << "Student Information:" << endl;
	cout << "Name: " << name << endl; 
 	cout << "Roll Number: " << rollNumber << endl;
	cout << "Aggregate: " << number << endl;
 	cout << "Section: " << character <<endl;	
	}
