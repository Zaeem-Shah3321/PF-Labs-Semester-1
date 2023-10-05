#include <iostream>
#include <cmath>
using namespace std;
float power(float num1 , float nim2);
main (){
    float base;
    cout << "Enter the base number: ";
    cin >> base;
    float pow;
    cout << "Enter the exponent: ";
    cin >> pow;
    float ans;
    ans = power(base,pow);
    cout << base << " raised to the power " << pow << " is: " << ans;
}
float power(float num1 , float num2)
{
   float result;
    result = pow (num1,num2);
    return result;
}
