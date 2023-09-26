#include <iostream>
using namespace std;
void sum (int num1, int num2);
void sub (int num1,int num2);
void mul (int num1,int num2);
void divi (int num1,int num2);
main (){
	int num1,num2; 
	char op;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;
if(op == '+')
{
	sum (num1,num2);
}
if(op == '-')
{
	sub (num1,num2);
}
if(op == '*')
{
	mul (num1,num2);
}
if(op == '/')
{
	divi (num1,num2);
}
}
void sum (int num1, int num2){
	int add = num1 + num2;
	cout << "Addition: " << add;
}
void sub (int num1, int num2){
	int min = num1 - num2;
	cout << "Subtraction: " << min;
}
void mul (int num1, int num2){
	int pro = num1 * num2;
	cout << "Multiplication: " << pro;
}
void divi (int num1, int num2){
	int divide = num1 / num2;
	cout << "Division: " << divide;
}
