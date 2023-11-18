#include <iostream> 
using namespace std;
int digitSum(int);
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans;
    ans = digitSum(num);
    cout << "Sum of digits: " << ans << endl;
}
int digitSum(int number)
{
    int sum = 0;
    int no = 0;
    for (int x = 0 ; number > 0 ; x++)
    {
        no = number % 10;
        sum = sum + no;
        number = number / 10;
    }
    return sum;
}