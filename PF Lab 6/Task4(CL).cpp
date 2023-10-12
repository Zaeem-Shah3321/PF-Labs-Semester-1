#include <iostream>
using namespace std;
int findGreatest (int num1 , int num2 , int num3);
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
    ans = findGreatest (num_1 , num_2 , num_3);
    cout << "The greatest number among " << num_1 <<", " << num_2 << ", and " << num_3 << " is: " << ans;
}
int findGreatest (int num1 , int num2 , int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    if (num3 > num1 && num3 > num2)
    {
        return num3;
    }
}