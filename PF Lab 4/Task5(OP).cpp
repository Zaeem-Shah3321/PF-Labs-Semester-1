#include <iostream>
using namespace std;
void eligible(int alg);
void notEligible(int n_alg);
main (){
	int age;
	cout << "Enter your age: ";
	cin >> age;
if(age >= 18)
{
	eligible(age);
}
if(age < 18)
{ 
	notEligible(age);
}
}
void eligible(int aGe)
{
	cout << "You are eligible to vote."; 
}  
void notEligible(int n_aGe)
{
	cout << "You are not eligible to vote.";
}