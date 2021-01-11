//change eqn of line to use pass by reference x=2, m=.3, b=1
//solve func is void
//main func cout results

#include <iostream>
using std::cout;
using std::endl;

void eq_line(float &x, float &m, float &b, float &y);
int main ()
{
	float x_=2, m_=.3, b_=1, y_;
	eq_line(x_,m_,b_,y_);
	cout << "y=mx+b has been calculated, it is: " << y_ << endl;
	cout << "Verfiying the variables" << endl;
	cout << "x= " << x_ << endl;
	cout << "m= " << m_ << endl;
	cout << "b= " << b_ << endl;
}

void eq_line(float &x,float &m, float &b, float &y)
{     
	y = m*x + b; 
	return;
}
