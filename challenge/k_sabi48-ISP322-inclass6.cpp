//creates random integer and pushes it to vector
//keep pushing a new random number in vector until 42 is pushed
//print out size of vector

#include<random>
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	srand((unsigned)time(0));
	
	int i;
	int k=1;
	vector<int> rvect;
	for (int j=0; j<k; j++) {
		k=k+1;
		i=(rand()%50)+1; //between 1 and 200
		rvect.push_back(i);
		cout << i << endl;
		if (i== 42) {
			break;
	
		}
	}
	cout << "Welcome to my TED talk, those were a lot of numbers, here's what you're really here for......." << endl;
	cout << "Size of vector is: " << rvect.size() << endl;
}
