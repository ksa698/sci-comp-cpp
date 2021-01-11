//Kiara Sabrina Alvarez ksa698
//Functions to sovle a right triangle
//Function: use 2 side lengths of a triangle to find hypotenuse/angles
//Creation Date: 09/25/20

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

//function1: calc hypotenuse from sidea=3, sideb=7
//function2: calc 1st angle
//function3: calc 2nd angle...
//return result to the main function to cout to the user

float hyp (int side_a,int side_b);
float ang1 (int side_a,float hyp); //use arcsin=opp/hyp
float ang2 (float ang1);

int main() {
	int side_a=3, side_b=7;
	float hypot;
	float angle1;
	float angle2;
	hypot=hyp(side_a,side_b);
	cout << "Given the two lengths of a right triangle 3 & 7 the following is true" << endl;
	cout << "The hypotenuse is: " << hypot << endl;
	
	angle1=ang1(side_a,hypot);
	cout << "Angle 1 is: " << angle1 << endl;

	angle2=ang2(angle1);
	cout << "Angle 2 is: " << angle2 << endl;
	}

//FUNCTIONS BOI
///////////////////////////////////////////////////////////
float hyp(int side_a,int side_b) {
	float hyp_;
	hyp_=sqrt(pow(side_a,2)+pow(side_b,2));
	return hyp_;
	} 
float ang1(int side_a,float hyp) {
	float ang1_;
	ang1_=asin(side_a/hyp)*(180/M_PI);
	return ang1_;
	}
float ang2(float ang1) {
	float ang2_;
	ang2_=180-90-ang1;
	return ang2_;
	}
