#include <iostream>
#include <cmath>
using namespace std;
float heightCalculator(float a , float b);
main (){
    float base;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> base;
    float elevation;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> elevation;
    float ans;
    ans = heightCalculator(base,elevation);
    cout << "The height of the tree is: " << ans << " feet";
}
float heightCalculator(float a , float b)
{
    float radian = b/57.2958;
    float tangent = tan(radian) * a;
    float ans;
    ans = tangent;
    return ans;
}