#include <iostream>
using  namespace std;
void pass(int sc);
void fail(int sco);
main (){
	int score;
	cout << "Enter your score: ";
	cin >> score;
if(score > 50)
{
	pass(score);
}
if(score <= 50)
{
	fail(score);
}
}
void pass(int sc)
{
	cout << "Pass";
}
void fail(int sco)
{
	cout << "Fail";
}
