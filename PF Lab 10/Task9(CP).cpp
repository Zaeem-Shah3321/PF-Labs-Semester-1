#include <iostream>
using namespace std;
int same(int elements[][3] , int);
main()
{
    int sizes;
    cout << "Enter the number of rows for the array: ";
    cin >> sizes;
    int element[sizes][3];
    cout << "Enter the elements of the array:" << endl;
    for (int x = 0 ; x < sizes ; x++ )
    {
        for (int y = 0 ; y < 3 ; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> element[x][y];
        }
    } 
    int ans;
    ans = same(element , sizes);
    cout << "The count of identical rows in the array is: " << ans;
}
int same(int elements[][3] , int size)
{
    int counter = 0 ;
    int check[3];
    int count = 0 ;
    for (int x = 0 ; x < size ; x++ )
    {
        for (int y = 0 ; y < 3 ; y++)
        {
            check[y] = elements[0][y];
        }
        for (int z = 0 ; z < 3 ; z++)
        {
            if (check[z] == elements[x][z])
            {
                count++;
            }
        }
    if (count == 3)
        {
            counter++;
        }
        count = 0;
    }
    if (counter == 1)
    {
        return 0;
    }
    return counter;
}