// Program for Additive Congruential Random Number Generation

#include<iostream>
using namespace std;

int main () {
	int i,  r[20], b=11, m=19;
	
	//	Initial value or random seed
	cout << "Enter the first element  : ";
	cin >> r[0];
	
	for (i = 0; i < 20 ; i++) {
		r[i+1] = (r[i] + b) % m;
		cout << "The random numbers generated are : " << r[i+1] << endl;
	}
	
	return 0;

}
