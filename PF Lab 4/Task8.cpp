#include <iostream>
using namespace std;
void discount(int disc);
void noDiscount(int ndisc);
main (){
	string day;
	cout << "Enter the day of purchase: ";
	cin >> day;
	int price;
	cout << "Enter the total purchase amount: $";
	cin >> price;
if(day == "Sunday")
{
	discount(price);
}
if(day != "Sunday")
{
	noDiscount(price);
}
}
void discount(int dis)
{
	dis = (dis - ((dis/100)*10));
	cout << "Payable Amount: $"<< dis;
}
void noDiscount(int ds)
{ 
	cout << "Payable Amount: $" << ds;
}

