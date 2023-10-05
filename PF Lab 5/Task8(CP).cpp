#include <iostream>
using namespace std;
void evenOdd (int number);
main (){
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;
    evenOdd(num);
}
void evenOdd (int ans)
{
    int num_1;
    num_1 = ans % 10;
    int num_12;
    num_12 = ans / 10;
    int num_2;
    num_2 = num_12 % 10;
    int num_22;
    num_22 = num_12 / 10;
    int num_3;
    num_3 = num_22 % 10;
    int num_32;
    num_32 = num_22 / 10;
    int num_4;
    num_4 = num_32 % 10;
    int num_42;
    num_42 = num_32 / 10;
    int sum;
    sum = num_1 + num_2 + num_3 + num_4 + num_42;
    if (sum % 2 == 0)
    {
        cout << "Evenish";
    }
    if (sum % 2 == 1)
    {
        cout << "Oddish";
    }
}