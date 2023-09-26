#include <iostream>
using namespace std;
void even(int ev);
void odd(int od);
main (){ 
	int num;
	cout << "Enter a number: ";
	cin >> num;
if(num%2 == 0)
{
	even(num);
}
if(num%2 == 1)
{
	odd(num);
}
}
void even(int ev)
{
	cout << "Number " << ev << " is even";
}
void odd(int od)
{ 
	cout << "Number " << od << " is odd";
}

