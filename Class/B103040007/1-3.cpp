#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

int main(){
	string user;
	char c;
	float total;
	cout << "Welcome to Currency Exchange Systeam. We accept USD and TWD: " << endl;
	c = cin.peek();
	if ( c == 'U' ){
		cin.ignore( 1000 , 'D' );
		cin >> total;
		cout << "Covert USD to TWD: TWD " << total * 30 << endl;
	}
	else if ( c == 'T' ){
		cin.ignore( 1000 , 'D' );
		cin >> total;
		cout << "Covert TWD to TWD: USD " << total / 30 << endl;
	}
	else {
		cout << "The currency you input is not provided." << endl;
	}
	
	
	return 0;
}	
