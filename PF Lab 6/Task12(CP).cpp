#include <iostream>
using namespace std;
float totalInCome (string , int , int);
main (){
    string type;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int columns;
    cout << "Enter the number of columns: ";
    cin >> columns;
    float ans;
    ans = totalInCome (type,rows,columns);
    cout << ans ;
}
float totalInCome (string type_1 , int rows_1 , int columns_1)
{
    float price;
    if (type_1 == "Premiere")
    {
        price = rows_1 * columns_1 * 12; 
    }
    if (type_1 == "Normal")
    {
        price = rows_1 * columns_1 * 7.50;
    }
    if (type_1 == "Discount")
    {
        price = rows_1 * columns_1 * 5;
    }
    return price;
}