#include <iostream>
#include <fstream>
using namespace std;
int totalcharacters(string);
main()
{
    string filename = "Task2(CP).txt";
    int lines = totalcharacters(filename);
    cout << "Total number of lines: " << lines; 
}
int totalcharacters(string name)
{
    fstream line;
    line.open(name , ios::in);
    int count = 0;
    string characters = "";
    while (!line.eof())
    {
        string x;
        getline(line , x);
        characters += x;
    }
    for (int x = 0 ; characters[x] != '\0' ; x++)
    {
        count++; 
    }
    line.close();
    return count;
}