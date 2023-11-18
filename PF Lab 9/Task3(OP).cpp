#include <iostream>
using namespace std;
main(){
    string word;
    string shiftedWord;
    int next_word;
    char letter;
    cout << "Enter a String: ";
    getline (cin , word);
    for (int x = 0; word[x] != '\0' ; x++)
    {
        letter = word[x];
        if (letter == 'Z')
            {
                letter = '@';
            }
            if (letter != ' ')
            {
                next_word = letter;
                next_word++;
                letter = next_word;
            }
            shiftedWord += letter;
        }
         cout << "Shifted String: " << shiftedWord;
    }
