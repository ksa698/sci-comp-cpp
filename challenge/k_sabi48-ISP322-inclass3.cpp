//Comments
#include <time.h>
#include <cmath>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {
/////////////////////////////////////////////////////////////
	srand (time(NULL));
	int i;
	int evn=0;
	int od=0;
	int rand();
	int num;
for (i=1;i<=1000000;i++)
	{
	num=rand()%10;
	if (num%2 == 0) {
		evn +=1; //make even number heads
	}
	else {
		od +=1;  //make odd number tails
	}
	}
cout << "How many coinflips have occured? " << i-1 << "! That's flipping crazy!" << endl;
cout << "   Total of all heads: " << evn << endl;
cout << "   Total of all tails: " << od << endl;
cout << "Quick Maths...heads+tails= " << evn+od << endl;
}
