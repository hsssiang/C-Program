#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main (){
	char input[80];
	char* shead = NULL;
	char* stail = NULL;
	char* counter = NULL;
	int counter_h = 0, counter_t = 0, i;
	cout << "Enter a string less than 80 characters long." << endl;
	cin.getline (input, 80);
	shead = input;
	stail = input + strlen(input)*sizeof(char);
	counter = shead;
	while ( counter != stail ){
		counter_h ++;
		counter += sizeof(char);
	}
	cout << "Your string reverse is:" << endl;
	for ( i = strlen(input) ; i >= 0 ; i -- ){
		cout << input[i];
	}
	counter = stail;
	while ( counter != shead ){
		counter_t ++;
		counter -= sizeof(char);
	}
	if ( counter_t == counter_h ) cout << endl << "And your numbers of your words is: " << counter_t << endl;
	return 0;
}
