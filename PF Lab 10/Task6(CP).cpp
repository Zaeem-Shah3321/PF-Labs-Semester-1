#include <iostream>
using namespace std;
main()
{
    int number1;
    int number2;
    string position;
    string characters[5][5] = {
                        {".",".",".","*","*"},
                        {".","*",".",".","."},
                        {".","*",".",".","."},
                        {".","*",".",".","."},
                        {".",".","*","*","."}
                        };
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> position;
    number1 = position[0] ;
    number1 = number1 - 65;
    number2 = position[1] ;
    number2 = number2 - '1';
    if (characters[number1][number2] == ".")
    {
        cout << "Result: splash";
    }
    else
    {
        cout << "Result: BOOM";
    }
    
}