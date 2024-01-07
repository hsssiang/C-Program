#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i, j, counter = 0;
	for ( i = 3 ; i < 1001 ; i ++ ){
		int primecheck = 0;
		for ( j = 2 ; j <= i / 2 ; j ++){
			if ( i % j == 0 ) primecheck = 1;
		}
		if ( primecheck == 0 && i < 101 ) {
			cout << i << " is a prime number. " << endl;
			counter ++;
		}
		else if ( primecheck == 0 ){
			counter ++;
		}
	}
	cout << "There are " << counter <<  " prime numbers between 3-1000 " << endl;
}

