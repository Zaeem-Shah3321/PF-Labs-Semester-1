#include <iostream>
using namespace std;
float parimeter(char shape_1 , float value_1);
main (){
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    float value ;
    cout << "Enter the value: ";
    cin >> value;
    float ans;
    ans = parimeter(shape , value);
    cout << "The perimeter is: " << ans;
}
float parimeter(char shape_1 , float value_1)
{   float perimeter_1;
    if (shape_1 == 's')
    {
        perimeter_1 = 4 * value_1;
    }
    if (shape_1 == 'c')
    { 
        perimeter_1 = 6.28 * value_1;
    }
    if (shape_1 == 't')
    {
        perimeter_1 = 3 * value_1;
    }
    if (shape_1 == 'h')
    {
        perimeter_1 = 6 * value_1;
    }
    return perimeter_1;
}