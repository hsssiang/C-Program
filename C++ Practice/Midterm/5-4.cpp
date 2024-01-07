#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
	char input[60];
	int i, count[5] = {0};
	cout << "Please enter a string" << endl;
	cin >> input ;
	for ( i = 0 ; input[i] != '\0' ; i ++ ){
		if ( input[i] == 'a' ) count[0] ++;
		else if ( input[i] == 'e' ) count[1] ++;
		else if ( input[i] == 'i' ) count[2] ++;
		else if ( input[i] == 'o' ) count[3] ++;
		else if ( input[i] == 'u' ) count[4] ++;
	}
	cout << "Vowel       Count" << endl;
	cout << "  a          "<< count[0] << endl;
	cout << "  e          "<< count[1] << endl; 
	cout << "  i          "<< count[2] << endl; 
	cout << "  o          "<< count[3] << endl; 
	cout << "  u          "<< count[4] << endl; 
	return 0;
}	

