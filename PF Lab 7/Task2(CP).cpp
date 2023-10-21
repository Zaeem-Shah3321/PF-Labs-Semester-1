#include <iostream>
using namespace std;
void generateFibonacci(int);
main (){
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
}
void generateFibonacci(int length_1)
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    for (int x = 0 ; x < length_1 ; x++)
    {
        if (x == length_1 - 1)
        {
            cout << n1;
        }
    else
        {
            cout << n1 << ", ";
        }
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        
    }
}