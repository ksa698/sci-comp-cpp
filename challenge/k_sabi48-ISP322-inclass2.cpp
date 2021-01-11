//Comment
//Kiara Sabrina Alvarez
//Program for head vs tails
//FUnction: designate odd/even for a random number inside an if statement
#include <time.h>
#include <cmath>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {
	//float a =#;
	//int b =#;
	//string name ="";
/////////////////////////////////////////////////////////////
	srand (time(NULL));
	int rand();
	int random_number = rand();
	cout << "If the random number is even that is heads, if it is odd its tails " << endl;
	cout << "Random number generated is: " << random_number << endl;
	if (random_number%2 == 0) {
	//because this code find either even or odd we can consider that the 
	//even=heads and odd=tails
	cout << "The number is even and hence heads" << endl;
	}
	else {
	cout << "The number is odd and hence tails" << endl;
	}

}
