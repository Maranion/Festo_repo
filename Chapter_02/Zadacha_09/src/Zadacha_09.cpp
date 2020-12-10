#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	vector<float> vect;
	vector<float> vect2;
	vector<float> vect3;
	float a =5.0;

	for(int i=0;i<25;i++){
		vect.push_back((float(rand())/float((RAND_MAX)) * a));
		vect2.push_back((float(rand())/float((RAND_MAX)) * a));
		vect3.push_back(vect.at(i)+vect2.at(i));
		}

	for(int i=0;i<25;i++){
		cout <<vect.at(i) << "|";
		}

	cout << endl;
	for(int i=0;i<25;i++){
		cout <<vect2.at(i) << "|";
		}

	cout << endl;
	for(int i=0;i<25;i++){
		cout <<vect3.at(i) << "|";
		}

	return 0;
}