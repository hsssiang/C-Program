#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Pizza {
	public:
		Pizza () {
			type = 0;
			size = 0;
			number = 0;
			poc = 0;
			price = 0;
		}
		void orderPizza ( int input01 = 0 , int input02 = 0 , int input03 = 0 , int input04 = 0) {
			type = input01;
			size = input02;
			number = input03;
			poc = input04;
		}
		void outputDescription(){
			switch ( type ){
				case 1:
					cout << "Deep Dish " ;
					break;
				case 2:
					cout << "Hand Tossed " ;
					break;
				case 3:
					cout << "Pan " ;
					break;
				
			}
			switch ( size ){
				case 1:
					cout << "Small Pizza " ;
					break;
				case 2:
					cout << "Medium Pizza " ;
					break;
				case 3:
					cout << "Large Pizza " ;
					break;
				
			}
			switch ( poc ){
				case 1:
					cout << number << " of Pepperoni toppings" << endl ;
					break;
				case 2:
					cout << number << " of Cheese toppings" << endl ;
					break;
				
			}
		}
		void computPrice (){
			switch ( size ){
				case 1:
					price = 10 + 2*number;
					cout << "The price of your order is " << price << endl;
					break;
				case 2:
					price = 14 + 2*number;
					cout << "The price of your order is " << price << endl;
					break;
				case 3:
					price = 17 + 2*number;
					cout << "The price of your order is " << price << endl;
					break;
				
			}
		}
	private:
		int type;
		int size;
		int number;
		int poc;
		int price;

};

int main(){
	string t , s , pr;
	int type , size , poc , prize , num;
	class Pizza order01;
	cout << "Please enter your type of pizza : " ;
	cin >> t;
	cout << "Please enter your size of pizza : " ;
	cin >> s;
	cout << "Please enter your number of pepperoni or cheese toppings : " ;
	cin >> num;
	cout << "Please enter your pepperoni or cheese toppings : " ;
	cin >> pr;
	if ( t == "deep_dish" ) {
		type = 1;
		order01.orderPizza( type );
	}
	else if ( t == "hand_tossed" ){
		type = 2;
		order01.orderPizza( type );
	}
	else if ( t == "pan" ){
		type = 3;
		order01.orderPizza( type );
	}
	if ( s == "small" ) {
		size = 1;
		order01.orderPizza( type , size , num );
	}
	else if ( s == "medium" ){
		size = 2;
		order01.orderPizza( type , size , num );
	}
	else if ( s == "large" ){
		size = 3;
		order01.orderPizza( type , size , num );
	}
	if ( pr == "pepperoni" ) {
		poc = 1;
		order01.orderPizza( type , size , num , poc );
	}
	else if ( pr == "cheese" ){
		poc = 2;
		order01.orderPizza( type , size , num , poc );
	}
	order01.outputDescription();
	order01.computPrice();
	return 0;
}	

