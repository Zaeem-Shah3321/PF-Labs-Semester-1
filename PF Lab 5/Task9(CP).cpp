#include <iostream>
using namespace std;
void time(int hours , int minutes);
main (){
    int hou;
    cout << "Enter Hours: ";
    cin >> hou;
    int min;
    cout << "Enter Minutes: ";
    cin >> min;
    time (hou,min);
}
void time(int hours , int minutes)
{
    if (hours <= 23 && minutes < 46)
    {
        cout << hours << ":" << minutes+15;
    }
    if (hours <= 23  && minutes > 46)
    {
        int hours_1;
        hours_1 = hours + 1;
        int minutes_1;
        minutes_1 = (minutes + 15) % 60;
        cout << hours_1 << ":" << minutes_1 ;
    }

}