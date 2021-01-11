#include <iostream>
using std::cout;
using std::endl;

void hello(); //prototype func, type void

int main() 
	{
	hello(); //calls the func
	return 0;
	}	
void hello()     //function and the commands
	{
	cout << "Hello World" << endl;
	}
