#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

void voucher ( int & , int & , bool &);

int main(){

	int voucherValue = 100 , itemCode;
	bool break_while = true;
	while ( voucherValue >= 10 ){
		cout << "1.) Apple 2.) Banana 3.)Grape 4.)Tomato ";
		cin >> itemCode;
		voucher ( voucherValue , itemCode , break_while );
		cout << "Remain " << voucherValue << endl;
	}
}

void voucher ( int &voucherValue , int &itemCode , bool &break_while ){
	if ( voucherValue  < 10 ) break_while = false;
	else{
		switch ( itemCode ){
			case 1:
				voucherValue -= 10;
				break;
			case 2:
				voucherValue -= 20;
				break; 
			case 3:
				voucherValue -= 30;
				break; 
			case 4:
				voucherValue -= 40;
				break;  
		}
	}
}
