#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main (){
	string input;
	int i;
	while (1){
		cout << "When enter a single ""-1"" in one line this program will end." << endl;
		getline(cin,input);
		if ( input == "-1" ) break;
		for ( i = 0 ; i < input.size() ; i ++ ){
			//cout << input[i] << endl;
			if ( (input[i] > 64 && input[i] < 88 ) || ( input[i] > 96 && input[i] < 120 ) ){
				cout << (char)(input[i] + 3);
			}
			else if ( (input[i] > 87 && input[i] < 91) || ( input[i] > 119 && input[i] < 123 ) ){
				cout << (char)(input[i] -23 );
			}
			else if ( input[i] > 47 && input[i] < 58 ){
				cout << (char)(input[i] - 5);
			}
			else if ( input[i] == ' ' ||  input[i] == '\n') {
				continue;
			}
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}
