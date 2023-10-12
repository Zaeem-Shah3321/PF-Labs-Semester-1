#include <iostream>
using namespace std;
int evenOdd (int num_1 , int num_2);
main (){
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    int mod_1;
    mod_1 = number % 10 ;
    int new_num;
    new_num = mod_1 / 10 ;
    int  mod_2;
    mod_2 = new_num % 10 ;
    int new_num_2;
    new_num_2 = mod_2 / 10;
    int sum ;
    sum = mod_1 + mod_2 + new_num_2;
    int ans;
    ans = evenOdd(number,sum);
    cout << ans; 
}
int evenOdd (int num_1 , int num_2)
{
    int ans_1 = 0;
    if(num_1 % 2 == 0 && num_2 % 2 == 0)
    {
        ans_1 = 1;
    }
    return ans_1;
}