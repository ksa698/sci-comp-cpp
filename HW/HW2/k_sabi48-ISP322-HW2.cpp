//Kiara Sabrina Alvarez ksa698
//Line slope program
//Function: take inputs for the slope and intercept of a line and compute the y
//Creation Date: 9/10/20

//................................................................//
//y=mx+b

#include <cmath>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {
	string name= "";
	float m;
	float x;
	float b;
	float y;

	cout << "Using the slope intercept formula y=mx+b we'll solve for y, first type your name!" << endl;
	cin >> name;
	cout << "Thank you, " << name << " please type the slope or m value" << endl;
	cin >> m;
	cout << "Please type the x value" << endl;
	cin >> x;
	cout << "Please type the y-intercept or b value" << endl;
	cin >> b;
	y=m*x+b;
	cout << "We solved it! The y value is: " << y << endl;	
}
