#include <iostream>
using namespace std;
float discount (string day , string month ,float price);
main (){
    string day_1;
    cout << "Enter Purchase Day: ";
    cin >> day_1;
    string month_1;
    cout << "Enter Purchase Month: ";
    cin >> month_1;
    float price_1;
    cout << "Enter Purchase Amount: ";
    cin >> price_1;
    float ans;
    ans =  discount (day_1 , month_1 , price_1);
    cout << "Payable Amount after discount: " << ans;
}
float discount (string day , string month ,float price)
{
    float disc = 0;
    if (day == "Sunday" || month == "October")
    {
        disc = price - (price * 0.1);
        return disc;
    } 
    else
    return price;
}