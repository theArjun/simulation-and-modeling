// Program for Multiplicative Congruential Random Number Generation

#include<iostream>
using namespace std;

int main () {
	int i, a=8, r[20], m=19;
	
	//	Initial value or random seed
	cout << "Enter the first element  : ";
	cin >> r[0];
	
	for (i = 0; i < 20 ; i++) {
		r[i+1] = (r[i]*a) % m;
		cout << "The random numbers generated are : " << r[i+1] << endl;
	}
	
	return 0;

}
