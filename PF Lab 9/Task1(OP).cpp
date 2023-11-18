#include <iostream>
using namespace std;
main (){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int x = 0 ; word[x] != '\0' ; x++)
    {
        cout << word[x] << " found at position " << x << endl;
    }
} 