#include <iostream>
using namespace std;
void sides ();
main (){ 
	sides ();
	}
void sides (){
	int sides;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> sides;
	int stickers;
	stickers = (sides * sides * 6);
	cout << "Number of stickers needed: "<< stickers;
}