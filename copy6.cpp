//creates random integer and pushes it to vector
//keep pushing a new random number in vector until 42 is pushed
//print out size of vector

#include<random>
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
/*
int main() {        
	srand((unsigned)time(0));
        int i;

        for (int j = 0; j<10; j++)
        {
           i = (rand()%200)+1; //generate number between 1 and 6
           cout << i << endl;
        }
}
*/

vector<int> randv(int count);

int main() {
	srand((unsigned)time(0));
	cout << (unsigned)time(0) << endl;

	int i;
	for (int j=0; j<5; j++) {
		i=(rand()%200)+1; //between 1 and 200
		cout << i << endl;
	}
}

//FUNCTION//////////////////////////////////////////////////////////
vector<int> randv(int count) {
	srand((unsigned)time(0));
		int i;
		vector<int> rvect;
		for (int j=0; j<count; j++) {
			i=(rand()%200)+1;
			rvect.push_back(i);
		}
		return rvect;
}
