#include <iostream>
using namespace std;
bool areSame (int num1 , int num2 , int num3);
main (){
    int num_1;
    cout << "Enter the first number: ";
    cin >> num_1;
    int num_2;
    cout << "Enter the second number: ";
    cin >> num_2;
    int num_3;
    cout << "Enter the third number: ";
    cin >> num_3;
    int ans;
    ans = areSame(num_1 , num_2 , num_3);
    cout << ans;
}
bool areSame (int num1 , int num2 , int num3)
{
    int ans_1 = 0;
    if (num1 == num2 && num2 == num3 && num1 == num3)
    {
        bool(true);
        ans_1 = 1;
        return ans_1;
    }
    else
    return ans_1;
}