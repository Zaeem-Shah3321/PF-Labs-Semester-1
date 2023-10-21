#include <iostream>
using namespace std;
int frequencyChecker(int,int);
main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int dig;
    cout << "Enter the digit to check: ";
    cin >> dig;
    int ans;
    ans = frequencyChecker(num,dig);
    cout << "Frequency: " << ans;
}
int frequencyChecker(int number, int digit)
{
    int freq = 0;
    int no;
    while (number > 0)
    {
        no = number % 10;
        if (no == digit)
        {
            freq = freq + 1;
        }
        number /= 10;
    }
    return freq;
}