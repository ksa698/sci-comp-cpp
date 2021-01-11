#include<iostream>
using std::cout;
using std::endl;
int main() {
	char letter = 'J';
	char &newletter = letter;
	newletter = 'Z';
	cout << letter << endl;
}
