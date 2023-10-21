#include <iostream>
using namespace std;
void printTable(int);
main (){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printTable (number);    
}
void printTable(int number_1)
{
    for (int x = 1 ; x <= 10 ; x++)
    {
        cout << number_1 << " x " << x << " = " << number_1 * x << endl;
    }
}