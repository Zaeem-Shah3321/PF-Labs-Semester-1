#include <iostream>
using namespace std;
int sum(int size);
main()
{
    int rowsize;
    cout << "Enter row size: ";
    cin >> rowsize;
    int ans;
    ans = sum(rowsize);
    cout << "The sum of elements in the matrix is: "  << ans;
}
int sum(int size)
{
    int element[size][3];
    cout << "Enter the elements of the matrix:" << endl;
    int sum = 0;
    for (int x = 0 ; x < size ; x++ )
    {
        for (int y = 0 ; y < 3 ; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> element[x][3];
            sum = sum + element[x][3];
        }
    }
     return sum;
}