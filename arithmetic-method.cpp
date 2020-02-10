// Program for Random Number Generation using Arithmetic Method

#include<iostream>
using namespace std;

int main () {
	int i, r0 = 11, r1 = 15, result, m = 17;
	
	for (i = 0; i < 20 ; i++) {
		result = (r0 + r1) % m;
		cout << "The random numbers generated are : " << result << endl;
		r0 = r1;
		r1 = result;
	}
	
	return 0;

}
