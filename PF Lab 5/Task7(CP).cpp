#include <iostream>
using namespace std;
void digits(int number1 , int number2);
main (){
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    int num_1;
    num_1 = num % 10;
    int num_11;
    num_11 = num / 10;
    int num_2;
    num_2 = num_11 % 10;
    int num_22;
    num_22 = num_11 / 10;
    digits(num_1,num_22);
}
void digits(int number1 , int number2)
{
    if(number2 == number1)
    {
        cout << "The number is symmetrical.";
    } 
    if(number2 != number1)
    {
        cout << "The number is not symmetrical.";
    }  
}
