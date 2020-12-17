#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	vector<float> vect;
	float a =5.0;

	for(int i=0;i<25;i++){
		vect.push_back((float(rand())/float((RAND_MAX)) * a));
		cout << vect.at(i) << "|";
		vect.at(i)*=vect.at(i);
	}
	
	cout << endl;
	for(int i=0;i<25;i++){
		cout <<vect.at(i) << "|";
	}
	
	return 0;
}
