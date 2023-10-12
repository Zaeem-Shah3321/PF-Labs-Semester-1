#include <iostream>
using namespace std;
string checkTitle(int age , char gender);
main (){
    int age_1;
    cout << "Enter your age: ";
    cin >> age_1;
    char gender_1;
    cout << "Enter your gender (m/f): ";
    cin >> gender_1;
    string title;
    title = checkTitle(age_1 , gender_1);
    cout << "Your personal title is: " << title;
}
string checkTitle(int age , char gender)
{
    string ans;
    if (age >= 16 && gender == 'm')
    {
        ans = "Mr.";   
    }
    if (age < 16 && gender == 'm')
    {
        ans = "Master";
    }
    if (age >= 16 && gender == 'f')
    {
        ans = "Ms.";
    }
    if (age < 16 && gender == 'f')
    {
        ans = "Miss";
    }
    return ans;
}