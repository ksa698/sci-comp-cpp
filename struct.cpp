#include<iostream>
#include<math.h>
using std::cout;
using std::endl;

struct tri{ float x; float y;}; //for now only do hyp
//void tester (tri &);

int main() {  
//trianlge side 1 =3,4
//triangle side 2 =5,12
//output is 90 angle, angle1, angle2, side length a/b/c(hyp)
	tri c1,c2;
	c1.x=3.0;
	c1.y=4.0;
	c2.x=5.0;
	c2.y=12.0;
	float hyp1= sqrt(pow(c1.x,2)+pow(c1.y,2));
	cout << "Hypotenuse of triangle 1= " << hyp1 << endl;
	
	float hyp2= sqrt(pow(c2.x,2)+pow(c2.y,2));
	cout << "Hypotenuse of triangle 2= " << hyp2 << endl;
}


/*
void tester (tri &a)
{
	z.y=a.x+1;
}
*/
