#include <iostream>
#include <string>
using namespace std;

int main(){
	int seat[11][11] = {0}, i , j, row, col;
	seat [1][1] = 1;
	seat [1][2] = 1;
	seat [2][1] = 1;
	seat [2][2] = 1;	
	seat [1][9] = 1;
	seat [2][9] = 1;	
	seat [1][10] = 1;	
	seat [2][10] = 1;
	seat [9][1] = 1;
	seat [9][2] = 1;
	seat [9][9] = 1;
	seat [9][10] = 1;
	seat [10][1] = 1;	
	seat [10][2] = 1;	
	seat [10][9] = 1;	
	seat [10][10] = 1;
	for ( i = 1 ; i < 11 ; i ++){
		for ( j = 1 ; j < 11 ; j ++ ){
			if ( seat[i][j] != 0) cout << "x";
			else cout << " ";
		}
		cout << endl;
	}
	while ( row > 0 ){
		cout << "row:" ;
		cin >> row ;
		if ( row < 0 ) break;
		cout << "col:" ;
		cin >> col ;
		row ++;
		col ++;
		if ( seat[row][col] != 0 ) cout << "Booking Error" << endl;
		else {
			seat[row][col] = 2;
			for ( i = 1 ; i < 11 ; i ++){
				for ( j = 1 ; j < 11 ; j ++ ){
					if ( seat[i][j] == 1) cout << "x";
					else if ( seat[i][j] == 2 ) cout << "o";
					else cout << " ";
				}
				cout << endl;
			}
		}
	}
	cout << "end of system" << endl;
	return 0;
}	

