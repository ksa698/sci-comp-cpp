//convert your triangle struct, and triangle functions into triangle class w/ methods

//Kiara Sabrina Alvarez ksa698
//Class with methods for solving right triangle
//Function: use 2 lengths of a triangle to find all lengths and angles
//Creation Date: 10/26/20
 
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


//YOU HAVE CLASS WOMAN!
class tri {
private: 
	double x;
	double y;
	double hyp; //c
	double ang1; //a1
	double ang2; //a2
	double ang3; //a3
public:
	tri() {}
	tri(double a, double b) {
		x=a;
		y=b;
	}

	double c() {
		hyp=sqrt(pow(x,2)+pow(y,2));
		return hyp;
	}
 
	double a1() {
		hyp;
		ang1=asin(x/hyp)*(180/M_PI);
		return ang1;
	}

	double a2() {
		ang1;
		ang2=180-90-ang1;
		return ang2;
	}

	double a3() {
		ang1;
		ang2;
		ang3=180-ang1-ang2;
		return ang3;
	}

};

int main () {
/////////////////////////////////////////////////////////////
	tri soln(3.0,4.0);
	cout << "Given sides a=3, b=4 these are the values of the right triangle" << endl;
	cout << "The hypotenuse is: " << soln.c() << endl;
	cout << "The first angle [deg] is: " << soln.a1() << endl;
	cout << "The second angle [deg] is: " << soln.a2() << endl;
	cout << "The last angle [deg] is: " << soln.a3() << endl;
	
	return 0;	
}
