//Input=2 vectors with 10 elements
//Output=2 rand vects A,B ; combined vect C; initial vector sizes after new vector was created
//A.size() , B.size()
#include<random>
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> rand_vect(int count);
void print_myvector(vector<int> printThis);
vector <int> combineV(vector<int> &A, vector<int> &B);

int main() {        
	srand(time(NULL));
	vector<int> vectorA = rand_vect(10);
	vector<int> vectorB = rand_vect(10);
	
	cout << "Size of A: " << vectorA.size() << endl;
	cout << "Random vector A: " << endl;
	print_myvector(vectorA);

	cout << "Size of B: " << vectorB.size() << endl;
	cout << "Random vector B: " << endl;
        print_myvector(vectorB);
	        
	vector<int> vectorC = combineV(vectorA,vectorB);
	cout << "vector C: " << endl;
	print_myvector(vectorC);
	
	cout << "Size of vectors after combining into C, and erasing A&B" << endl;
	cout << "Size of A: " << vectorA.size() << endl;
	cout << "Size of B: " << vectorB.size() << endl; 
	cout << "Size of C: " << vectorC.size() << endl;
}

//FUNCTIONS///////////////////////////////////////////////
vector <int> rand_vect(int count) {
        int i;
	vector<int> myRandomVector;

        for (int j = 0; j<count; j++)
        {
           i = (rand()%32)+1; 
           myRandomVector.push_back(i);
        }
	return myRandomVector;
}

void print_myvector(vector<int> printThis)
{
	for (int m: printThis)
	{
	cout << m << endl;
	}
}

vector<int> combineV(vector<int> &A, vector<int> &B)
{ 
	vector<int> C;
	for (int val: A)
	{
	C.push_back(A.front()); //A.front()
	A.erase(A.begin());
	}

	for (int val: B)
	{
	C.push_back(B.front()); //B.front()
	B.erase(B.begin());
	}
	return C;
}
