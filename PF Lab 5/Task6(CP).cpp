#include <iostream>
using namespace std;
char alphabet (char letter);
main (){
    char l1;
    cout << "Enter a character (A/a): " ;
    cin >> l1;
    char ans;
    ans = alphabet(l1);  
}
char alphabet (char letter)
{
    if (letter == 'A')
    {
        cout << "You have entered Capital A";
    }
    if (letter == 'a')
    {
        cout << "You have entered small a";
    }
}