/* heading
Elena Chen 9/21/17 Period 3
Assignment Name: Text Display
Created a text display of "Hello World" and get familiar with C++
*/

// Libraries
#include <iostream> //give access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //give access to _kbhit() and _getch() for pause()

// namespace
using namespace std;

// function()
void pause() {
	cout << "press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// main
void main() {
	int x = 3; //period number
	char y = 'l';
	cout << "he" << y << y << "o wor" << y << "d";
	cout << "this is period " << x;
	pause();
}