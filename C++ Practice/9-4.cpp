#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main (){
	char input[1000];
	int i;
	while (1){
		cout << "When enter a single ""-1"" in one line this program will end." << endl;
		cin.getline(input,1000);
		int target = 0;
		if ( !(strcmp( input , "-1" )) ) break;
		for ( i = 0 ; i < strlen(input) ; i ++ ){
			if ( !((input[i] > 64 && input[i] < 91 ) || ( input[i] > 96 && input[i] < 123 )) ){
				int counter = 0, j = i;
				if ( j < 5 ) continue;
				while ( !((input[j] > 64 && input[j] < 91 ) || ( input[j] > 96 && input[j] < 123 )) ){
					j --;
				}
				while ( (input[j] != ' ' && j != 0) ){
					counter ++;
					j --;
				}
				if ( counter == 4 && target != j){
					if ( input[j + 1] < 91 ) input[j + 1] = 'L';
					else input[j + 1] = 'l';
					input[j + 2] = 'o';
					input[j + 3] = 'v';
					input[j + 4] = 'e';
					target = j + 1;
				}
			}
		}
		cout << input << endl;
	}
	return 0;
}
