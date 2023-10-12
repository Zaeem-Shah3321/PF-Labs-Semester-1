#include <iostream> 
using namespace std;
int greaterNumber (int num_1 , int num_2);
main (){
    int num1;
    cout << "Enter the first number: ";
    cin >> num1;
    int num2;
    cout << "Enter the second number: ";
    cin >> num2;
    int ans;
    ans = greaterNumber(num1 , num2);
    cout << greaterNumber(num1 , num2);
}
int greaterNumber (int num_1 , int num_2)
{
    int ans_1 = 0;
    if (num_1 > num_2)
    {
        ans_1 = 1 ;
    }
    return ans_1;
}
