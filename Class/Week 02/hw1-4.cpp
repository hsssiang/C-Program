#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int input;
	while (1) {
		cout << "Please input your socre:";
		cin >> input;
		input = input / 10;
		switch ( input ){
			case 10: 
				cout << "A" << endl;
				break;
			case 9: 
				cout << "A" << endl;
				break;
			case 8: 
				cout << "A" << endl;
				break;
			case 7: 
				cout << "B" << endl;
				break;
			case 6: 
				cout << "C" << endl;
				break;
			case 5: 
				cout << "D" << endl;
				break;
			default:
				cout << "E" << endl;
				break;
		}
	}
}	

