#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

bool even (int);

int main(){

	int input;
	cout << "Please enter a number";
	cin >> input;
	cout << "Output: " << even (input) << endl;
}

bool even (int input){
	if ( input % 2 == 0 ) return true;
	else return false;
}
