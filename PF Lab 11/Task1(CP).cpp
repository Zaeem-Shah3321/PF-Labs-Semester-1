#include <iostream>
#include <fstream>
using namespace std;
int totallines(string);
main()
{
    string filename = "Task1(CP).txt";
    int lines = totallines(filename);
    cout << "Total number of lines: " << lines; 
}
int totallines(string name)
{
    fstream line;
    line.open(name , ios::in);
    int count = 0;
    while (!line.eof())
    {
        string x;
        getline (line , x);
        count++; 
    }
    line.close();
    return count;
}