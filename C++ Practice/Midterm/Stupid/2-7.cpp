#include<iostream>
using namespace std;
int main(void)
{
	double expanses = 0 , savings = 1, a , b;
	while (1){
		if ( savings < expanses ){
			cout << "Bankrupt" << endl;
			break;
		}
		else {
			cout << "Savings :" << savings << endl;
			cout << "Savings :" ;
			cin >> a;
			savings += a;
			cout << "Expanse :" << expanses << endl;
			cout << "Expanse :" ;
			cin >> b;
			expanses += b;
		}
	}
	return 0;
}



	
