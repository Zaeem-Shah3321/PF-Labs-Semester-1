#include <iostream>
#include <cmath>
using namespace std;
float maths (float a , float b , float c);
main (){
    float a;
    cout << "Enter the value of a: ";
    cin >> a;
    float b;
    cout << "Enter the value of b: ";
    cin >> b;
    float c;
    cout << "Enter the value of c: ";
    cin >> c;
    maths (a,b,c);
}
float maths (float a, float b ,float c)
{
    float discreminant;
    discreminant = ((b*b) - (4*a*c));
    if (discreminant == 0)
    {
        float x1 = (-b/(2*a));
        float x11 = x1;
        cout << "Solution: x = "<< x1;
    }  
    if (discreminant > 0 )
    {
        float x2 = (-b + sqrt(discreminant)/(2*a));
        float x21 = (-b - sqrt(discreminant)/(2*a));
        cout << "Solutions: x = " << x2 << " and x = " << x21;
    } 
    if (discreminant < 0)
    {
        float x3 =(-b/(2*a)) ;
        float x32 = ((sqrt(-discreminant))/(2*a));
        cout << "Complex Solutions: x = "<< x3 << " + " << x32 << "i" << " and x = " << x3 << " - " << x32 << "i" ; 
    }
}

