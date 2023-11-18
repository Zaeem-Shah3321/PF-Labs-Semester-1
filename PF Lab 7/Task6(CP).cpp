#include <iostream>
using namespace std;
int gcd(int,int);
int lcm(int,int,int);
main()
{
    int num1;
    cout << "Enter the first number: ";
    cin >> num1;
    int num2;
    cout << "Enter the second number: " ;
    cin >> num2;
    int ans;
    ans = gcd(num1,num2);
    cout << "GCD: " << ans << endl;
    int answer;
    answer = lcm(num1,num2,ans);
    cout << "LCM: " << answer;
}
int gcd(int number1 , int number2)
{
    int x;
    while (number2 != 0)
    {
        x = number2;
        number2 = number1 % number2;
        number1 = x;
    }
    return x;    
}
int lcm(int numb1 , int numb2 , int gCd)
{
    int lcm;
    lcm = numb1 * numb2/ gCd;
    return lcm;
}
