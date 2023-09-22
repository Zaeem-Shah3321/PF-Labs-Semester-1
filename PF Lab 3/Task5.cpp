#include <iostream>
using namespace std; 
main (){
	string name;
	cout << "Enter the student's name: " ;
	cin >> name;
	float m_marks;
	cout << "Enter matriculation marks (out of 1100): ";
	cin >> m_marks;
	float i_marks;
	cout << "Enter intermediate marks (out of 550): ";
	cin >> i_marks;
	float e_marks;
	cout << "Enter Ecat marks (out of 400): ";
	cin >> e_marks;
	float agg;
	agg = ((e_marks/400 * 0.5) + (m_marks/1100 * 0.1) + (i_marks/550 * 0.4)) * 100;
	cout << "Aggregate score for " << name << " in UET is: " << agg << "%";
	}