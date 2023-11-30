#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;
    int elements[size][5];
    cout << "Enter the elements of the matrix: " << endl;
    for (int x = 0 ; x < size ; x++)
    {
        for (int y = 0 ; y < 5 ; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: "; 
            cin >> elements[x][y] ;
        }
    }
    cout << endl;
    cout << "Original Matrix:" << endl;
    for (int x = 0 ; x < size ; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << elements[x][y] <<  " ";
        }
        cout << endl;
    }
    int max = 0;
    int largestColumn = 0;
    for (int y = 0 ; y < 5 ; y++)
    {
        if (elements[0][y] > max)
        {
            max = elements[0][y];
            largestColumn = y;
        }
    }
    int y = 0;
    for (int x = 0; x < 3; x++)
    {
        int temp = elements[x][y];
        elements[x][y] = elements[x][largestColumn];
        elements[x][largestColumn] = temp;
    }
    cout << endl;
    cout << "Matrix after largest column moved to first:" << endl;
    for (int x = 0 ; x < size ; x++)
    {
        for (int y = 0 ; y < 5 ; y++)
            cout << elements[x][y] << " ";
        cout << endl;
    }      
}