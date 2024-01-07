#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string str;
	char cstr[100];
	int i;
	cout << "Enter a string: ";
	cin >> str;
	strcpy ( cstr , str.c_str() );
	cout << "Inverse string: ";
	for ( i = (str.length() - 1) ; i >= 0 ; i -- ){
		cout << cstr[i];
	}
	cout << endl;
	return 0;
}
