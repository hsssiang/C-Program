#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
	float deposit, fixAmount, rate = 0.015, interest, principal;
	int month = 1;
	cout << "Deposit: ";
	cin >> deposit;
	principal = deposit;
	cout << "Rate: " << rate << endl;;
	cout << "Fixed amount withdrawn everymonth: ";
	cin >> fixAmount;
	cout << "Month     Interest     Principal" << endl;
	while ( principal > fixAmount ) {
		cout << month << "     " ;
		cout << principal * rate << "     ";
		principal += (principal * rate);
		principal -= fixAmount;
		cout << principal << endl ;
		month++;
	}
	return 0;
}
