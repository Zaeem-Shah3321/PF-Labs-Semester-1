#include <iostream>
using namespace std;
main()
{
    int size = 3;
    int matrix[size][size];
    cout << "Enter the elements of the matrix:" << endl;
    int x ;
    int y ;
    for(x = 0 ; x < size ; x++)
    {
        for(y = 0 ; y < size ; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: " ;
            cin >> matrix[x][y] ;
        }
    }
    cout << "The matrix you entered is:" << endl;
    for(x = 0 ; x < size ; x++)
    {
        for(y = 0; y < size; y++)
        {
            cout << matrix[x][y] << '\t' ;
        }
        cout << endl;
    }
    int identity = 0;
    for(x = 0 ; x < size ; x++ )
    {
        for(y = 0 ; y < size ; y++)
        {
            if (x == y)
            {
                if (matrix[x][y] ==  1)
                {
                    identity = 1;
                }
                else
                {
                    identity = 0;
                }
            }
            else{
                if (matrix[x][y] == 0)
                {
                    identity = 1;
                }
                else
                {
                    identity = 0;
                }
            }
        }
    }
    
    if(identity == 1)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}

