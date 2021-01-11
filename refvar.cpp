#include<iostream>
using std::cout;
using std::endl;

int main() {
int variable = 1100;
int &bob=variable; //&=reference var

cout <<"variable = " << variable << endl;
cout <<"bob " << bob << endl;

bob=7;
cout <<"variable = " << variable << endl; //now this output is bob
cout <<"bob " << bob << endl;		  //now this is variable

variable=7;
cout <<"variable = " << variable << endl; //now this output is bob
cout <<"bob " << bob << endl;             //now this is variable
}

