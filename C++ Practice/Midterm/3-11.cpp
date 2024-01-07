#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int humanTurn ( int );
int computerTurn ( int );

int humanpoint = 0;
int robotpoint = 0;

int main(){
	srand ( time(0) );
	while ( humanpoint < 100 && robotpoint < 100  ){
		humanTurn ( humanpoint );
		if ( humanpoint > 100 ) break;
		computerTurn ( robotpoint );
		if ( robotpoint > 100 ) break;
	}
	if ( humanpoint >= 100 ){
		cout << "You win!!" << endl;
	}
	else if ( robotpoint >= 100 ){
		cout << "Sorry computer won!" << endl;
	}
	return 0;
}

int humanTurn ( int hpoint ){
	char roll;
	int temp_point = 0, temp_total = 0;
	cout << "It's your turn! Press 'r' to roll." <<endl;
	cin >> roll;
	while ( roll != 'r' ){
		cout << "It's your turn! Press 'r' to roll." <<endl;
		cin >> roll;
	}
	do {
		temp_point = rand()%6+1;
		if ( temp_point == 1 ){
			cout << "You roll 1. It's computer turn." << endl;
			return 0;
		}
		else {
			cout << "You roll " << temp_point << " " << endl;
			temp_total += temp_point;
		}
		cout << "If you hold, your total score well be " << humanpoint + temp_total << endl;
		cout << "Press 'h' to hold , 'r' to roll : " ;
		cin >> roll;
	}while ( roll != 'h' );
	if ( roll == 'h' ){
		humanpoint += temp_total;
		return humanpoint ;
	}
}

int computerTurn ( int rpoint ){
	int temp_point = 0, temp_total = 0;
	do {
		temp_point = rand()%6+1;
		if ( temp_point == 1 ){
			cout << "Computer roll 1. It's human turn." << endl;
			return 0;
		}
		else {
			cout << "Computer roll " << temp_point << " " << endl;
			temp_total += temp_point;
		}
		cout << "Computer's score in this round is " << robotpoint + temp_total << endl;
	}while ( robotpoint + temp_total < 20 );
	if ( robotpoint + temp_total >= 20 ){
		robotpoint += temp_total;
		return robotpoint ;
	}
}
