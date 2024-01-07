#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i;
	cout << "Please Enter an interger: " << endl;
	cin >> i;
	if ( i % 2 != 0 ){
		cout << i << " is odd !" << endl;
	} 
	else cout << i << " is even !" << endl;
}

