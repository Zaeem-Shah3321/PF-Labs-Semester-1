#include <iostream>
using namespace std;
float min(float num1,float n2);
main(){
    float num_1;
    cout << "Enter the first number: ";
    cin >> num_1;
    float num_2;
    cout << "Enter the second number: ";
    cin >> num_2;
    float minimum = min(num_1,num_2);
    cout << "The minimum of "<< num_1 << " and " << num_2 << " is: " << minimum;
    
}
float min(float num1 , float num2)
{
    if (num1 > num2)
    {
       return num2;
    }
    if (num1 < num2)
    {
        return num1; 
    }
}