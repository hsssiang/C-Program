#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class BoxofProduce{
public:
	int i;
	BoxofProduce(){
		for ( i = 1 ; i < 4 ; i ++ ){
			box[i] = i;
		}
	}
	void set( int index , int produce ){
		box[index] = produce;
	}
	void get( void ){
		int i;
		for ( i = 1 ; i < 4 ; i ++ ){
			cout << "(" << i << ")";
			switch ( box[i] ){
				case 1:
					cout << "Broccoli";
					break;
				case 2:
					cout << "Tomoto";
					break;
				case 3:
					cout << "Kiwi";
					break;
				case 4:
					cout << "Kale";
					break;
				case 5:
					cout << "Tomatillo";
					break;
			}
		}
		cout << endl;
	}
private:
	int box[4];
};

int main (){
	string input;
	char function;
	int index, produce, i;
	BoxofProduce one;
	while ( 1 ){
		cout << "The box contains: ";
		one.get();
		cout << "Enter 'C' to change a bundle." << endl;
		cout << "Enter 'q' to quit." << endl;
		cin >> function;
		if ( function == 'q' ){
			cout << "Final Contents:" << endl;
			cout << "The box contains: ";
			one.get();
			break;
		}
		else {
			cout << "Enter index of item to change." << endl;
			cin >> index;
			cout << "Enter item to substitute." << endl;
			cin >> input;
			while (1){
				if ( input == "Broccoli" ) {
					produce = 1;
					one.set( index, produce );
					break;
				}
				else if ( input == "Tomoto" ) {
					produce = 2;
					one.set( index, produce );
					break;
				}
				else if ( input == "Kiwi" ) {
					produce = 3;
					one.set( index, produce );
					break;
				}
				else if ( input == "Kale" ) {
					produce = 4;
					one.set( index, produce );
					break;
				}
				else if ( input == "Tomatillo" ) {
					produce = 5;
					one.set( index, produce );
					break;
				}
				else {
					cout << "Error" << endl;
					cout << "Enter item to substitute." << endl;
					cin >> input;
				}
			}
		}
		
	}
	return 0;
}
