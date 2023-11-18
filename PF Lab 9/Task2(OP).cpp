#include <iostream>
using namespace std;
main (){
    string word;
    cout << "Enter a string: ";
    getline(cin , word);
    int count = 0;
    string reversed = "";
    for (int x = 0 ; word[x] != '\0' ; x++)
    {
        count ++ ;
    }
    for (int x = count ; x != -1 ; x--)
    {
        reversed += word[x] ;
    }
    cout << "Reversed String: " << reversed;
}