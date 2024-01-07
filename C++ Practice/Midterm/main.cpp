#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
	int table[4][6], user[4][6], user_input[6] = {0}, temp1, temp2, i, j, cd[4], min = 0, index = 0;
	table[0][0] = 3;
	table[0][1] = 1;
	table[0][2] = 5;
	table[0][3] = 2;
	table[0][4] = 1;
	table[0][5] = 5;
	table[1][0] = 4;
	table[1][1] = 2;
	table[1][2] = 1;
	table[1][3] = 4;
	table[1][4] = 2;
	table[1][5] = 4;
	table[2][0] = 3;
	table[2][1] = 1;
	table[2][2] = 2;
	table[2][3] = 4;
	table[2][4] = 4;
	table[2][5] = 1;
	table[3][0] = 5;
	table[3][1] = 1;
	table[3][2] = 4;
	table[3][3] = 2;
	table[3][4] = 4;
	table[3][5] = 2;
	for ( i = 0 ; i < 3 ; i ++ ){
		cout << "Enter a movie to rate ( 100 - 105 )" << endl;
		cin >> temp1;
		cout << "Enter ratint ( 1 - 5 ) for this movie" << endl;
		cin >> temp2;
		user_input [temp1%100] = temp2;
	}
	for ( i = 0 ; i < 4 ; i ++ ){
		for ( j = 0 ; j < 6 ; j ++ ){
			if ( user_input[j] != 0 ) {
				user[i][j] = user_input[j] - table[i][j];
				user[i][j] = user[i][j] * user[i][j];
			}
		}
	}
	for ( i = 0 ; i < 4 ; i ++ ){
		for ( j = 0 ; j < 6 ; j ++ ){
			if ( user[i][j] != 0 ) {
				cd[i] += user[i][j];
			}
		}
		if ( cd[i] <= min ) {
			min = cd[i];
			index = i;
		}
	}
	cout << "The Closest reviewer number is " << index << endl;
	cout << "Predictions for movies you have not yet seen:" << endl;
	for ( i = 0 ; i < 6 ; i ++ ){
		if ( user_input[i] == 0 ) {
				cout << "Movie " << i + 100 << " : Predicted Rating = " <<  table[index][i] << endl;
 			}
	}
	return 0;
}

