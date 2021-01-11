//Comments
//Kiara Alvarez
//Program for arrays
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
	//string insert_name= "";
	//cout <<"Who dare disturb my slumber?";
	//cin >> insert_name;
	//cout <<"OH, Hello " << insert_name << "!" << endl;
/////////////////////////////////////////////////////////////
	char array_alpha [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	//cout << "First Element= " << array_alpha [0] << endl;
	//cout << "Second Element= " << array_alpha [1] << endl;
	//cout << "Third Element" << array_alpha [2] << endl;
	//cout << "Fourth Element" << array_alpha [3] << endl;
	int a;
	cout << "What letter from the alphabet do you want (1-26), please insert a number ?" << endl;
	cin >> a;
	int b=a-1;
	cout << "The letter you chose is: " << array_alpha[b] << endl;
	

}
