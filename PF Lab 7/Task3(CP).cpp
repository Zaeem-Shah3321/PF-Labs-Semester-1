#include <iostream>
using namespace std;
int totalDigit(int);
main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans;
    ans = totalDigit(num);
    cout << "Total number of digits: " << ans;
}
int totalDigit(int digits)
{
    int dig = 0;
    if (digits == 0)
    {
        return 1;
    }
    while(digits != 0)
    {
        digits /= 10;
        dig++;
    }
    return dig;
}