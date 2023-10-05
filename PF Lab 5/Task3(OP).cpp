#include <iostream>
#include <cmath>
using namespace std;
float sqr(float num1);
main (){
    float number;
    cout << "Enter a number: ";
    cin >> number;
    float answer;
    answer = sqr(number);
    cout << "The square root of " << number << " is: " << answer;
}
float sqr(float num1)
{
    float ans = sqrt(num1);
    return ans;
}