#include <iostream> 
using namespace std;
void speed(float);
main (){
    float speed_1 ;
    cout << "Enter the speed: " ;
    cin >> speed_1 ;
    speed (speed_1);
}
void speed (float limit)
{
    if (limit <= 10)
    {
        cout << "slow";
    }
    if (limit > 10 && limit <=50)
    {
        cout << "average";
    }
    if (limit > 50 && limit <= 150)
    { 
        cout << "fast";
    }
    if (limit > 150 && limit <= 1000)
    {
        cout << "ultra-fast";
    }
    if (limit > 1000)
    {
        cout << "extremely fast";
    }
}