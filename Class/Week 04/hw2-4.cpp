#include<iostream>
using namespace std;
int main(void)
{
	char p1 , p2 , cont;
	int point_1 = 0 , point_2 = 0;
	while(1) {
		cout << "Please enter player1 (R)Rock , (P)Paper , (S)Scissors." << endl;
		cin >> p1;
		cout << "Please enter player2 (R)Rock , (P)Paper , (S)Scissors." << endl;
		cin >> p2;
		if ( p1 == p2 ) cout << "No winner." << endl;
		else if ( p1 == 'R' ){
			if ( p2 == 'S' ) {
				cout << "Player 1 wins." << endl;
				point_1 ++;
			}
			else {
				cout << "Player 2 wins." << endl;
				point_2 ++;
			}
		}
		else if ( p1 == 'P' ){
			if ( p2 == 'R' ) {
				cout << "Player 1 wins." << endl;
				point_1 ++;
			}
			else {
				cout << "Player 2 wins." << endl;
				point_2 ++;
			}
		}
		else if ( p1 == 'S' ){
			if ( p2 == 'P' ) {
				cout << "Player 1 wins." << endl;
				point_1 ++;
			}
			else {
				cout << "Player 2 wins." << endl;
				point_2 ++;
			}
		}
		cout << "Totals to this move:" << endl;
		cout << "Player 1:" <<" "<< point_1 << endl;
		cout << "Player 2:" <<" "<< point_2 << endl;
		cout << "Play again? Y/y continues, other quits.   ";
		cin >> cont;
		if ( cont == 'Y' || cont == 'y' ) cout << "continue...." << endl;
		else break;
	}
	cout << "Thanks" << endl;
	return 0;
}



	
