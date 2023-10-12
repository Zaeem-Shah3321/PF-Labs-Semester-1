#include <iostream> 
using namespace std;
float lowest (int , string);
main (){
    int km;
    cout << "Enter the number of kilometers: ";
    cin >> km;
    string period;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    float ans;
    ans = lowest (km , period);
    cout << "Lowest price for " << km << " kilometers: " << ans << " EUR";
}
float lowest (int kilom , string period_1)
{
    float price;
    if (period_1 == "day" && kilom < 20)
    {
        price = 0.70 + (kilom * 0.79);
    }
    if (period_1 == "night" && kilom < 20)
    { 
        price = 0.70 + (kilom * 0.90);
    }
    if (kilom > 20 && kilom < 100)
    {
        price = kilom * 0.09;
    }
    if (kilom > 100)
    {
        price = kilom * 0.06;
    }
    return price;
}