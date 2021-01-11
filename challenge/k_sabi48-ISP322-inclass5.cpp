#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<math.h>
using std::cout;
using std::endl;

struct tri{ float x; float y; float hyp; float ang1; float ang2; float nine;}; //for now only do hyp

int main() {  
//trianlge side 1 =3,4
//triangle side 2 =5,12
//output is 90 angle, angle1, angle2, side length a/b/c(hyp)
	tri c1,c2;
	c1.x=3.0;
	c1.y=4.0;
        c1.hyp=sqrt(pow(c1.x,2)+pow(c1.y,2));
                c1.ang1=asin(c1.x/c1.hyp)*(180/M_PI);
                c1.ang2=180-90-c1.ang1;
		c1.nine=180-c1.ang1-c1.ang2;
	c2.x=5.0;
	c2.y=12.0;
        c2.hyp=sqrt(pow(c2.x,2)+pow(c2.y,2));
                c2.ang1=asin(c2.x/c2.hyp)*(180/M_PI);
                c2.ang2=180-90-c2.ang1;
		c2.nine=180-c2.ang1-c2.ang2;
	
	cout << "Triangle 1 values:" << endl;
		cout << "Side a=" << c1.x << "; Side b=" << c1.y << "; Hypotenuse=" << c1.hyp << endl;
		cout << "Angle 1 [deg]= " << c1.ang1 << "; Angle 2 [deg]= " << c1.ang2 << "; Angle 3 (right angle in deg)= " << c1.nine << endl;	
	cout << " " << endl;
	cout << "Triangle 2 values:" << endl;
                cout << "Side a=" << c2.x << "; Side b=" << c2.y << "; Hypotenuse=" << c2.hyp << endl;
                cout << "Angle 1 [deg]= " << c2.ang1 << "; Angle 2 [deg]= " << c2.ang2 << "; Angle 3 (right angle in deg)= " << c2.nine << endl;
}

