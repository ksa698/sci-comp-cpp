//Comments
//Kiara Alvarez
//Program for array test
#include <cmath>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

///////////////////////////////////////////////////////////
int main () {
//space is a character, it will count if the string has spaces
	string input_string;
	int position_number;
	cout << "Enter a Word" << endl;
	getline (cin,input_string); //read whole line when put in
	//cin >> input_string;
	cout << "Enter a number position in " << input_string << endl;
	cin >> position_number;
	cout << "In " << input_string << " the " << position_number << " element is " << input_string [position_number] << endl;
	}
