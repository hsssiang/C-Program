#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

class date{
	public:
		int getyear () { return year; }
		int getmonth () { return month; }
		int getdate () { return da; }
		void set ( int a, int b, int c ){
			year = a;
			month = b;
			da = c;
		}
		void get (){
			cout << year << "/" << month << "/" << da << endl;
		}
		date (){
			year = 0;
			month = 0;
			da = 0;
		}
	private:
		int year;
		int month;
		int da;
};

bool operator > ( date& obj1, date& obj2 ){
	if ( obj1.getyear() > obj2.getyear() ){
		return true;
	}
	if ( obj1.getyear() == obj2.getyear() ){
		if ( obj1.getmonth() > obj2.getmonth() ){
			return true;
			
		}
	}
	if ( obj1.getyear() == obj2.getyear() ){
		if ( obj1.getmonth() == obj2.getmonth() ){
			if ( obj1.getdate() > obj2.getdate() ){
				return true;
			}
		}
	}
	return false;
}

bool operator < ( date& obj1, date& obj2 ){
	if ( obj1.getyear() < obj2.getyear() ){
		return true;
	}
	if ( obj1.getyear() == obj2.getyear() ){
		if ( obj1.getmonth() < obj2.getmonth() ){
			return true;
			
		}
	}
	if ( obj1.getyear() == obj2.getyear() ){
		if ( obj1.getmonth() == obj2.getmonth() ){
			if ( obj1.getdate() < obj2.getdate() ){
				return true;
			}
		}
	}
	return false;
}

bool operator == ( date& obj1, date& obj2 ){
	obj1.get();
	obj2.get();
	if ( obj1.getyear() == obj2.getyear() ){
		if ( obj1.getmonth() == obj2.getmonth() ){
			if ( obj1.getdate() == obj2.getdate() ){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int a, b, c, i,num1,num2;
	string in01, in02;
	date d[4];
	cout << "Please enter 3 dates to test: " << endl;
	for (  i = 0 ; i < 3 ; i ++ ){
		cout << "Enter the date" << i + 1 << ": ";
		cin >> a >> b >> c;
		d[i+1].set( a, b, c ); 
	}
	for (  i = 0 ; i < 3 ; i ++ ){
		d[i+1].get(); 
	}
	cout << "Choose two dates to compare (> , < , =): ";
	cin >> in01 >> in02;
	if ( in01[4] == '1' ) num1 = 1;
	else if ( in01[4] == '2' ) num1 = 2;
	else if ( in01[4] == '3' ) num1 = 3;
	if ( in02[4] == '1' ) num2 = 1;
	else if ( in02[4] == '2' ) num2 = 2;
	else if ( in02[4] == '3' ) num2 = 3;
	if (d[num1] > d[num2]) {
		cout << d[num1].getyear() << "/" << d[num1].getmonth() << "/" << d[num1].getdate() << " > " ;
		cout << d[num2].getyear() << "/" << d[num2].getmonth() << "/" << d[num2].getdate() << endl ;
	}
	else if ( d[num1] < d[num2]) {
		cout << d[num1].getyear() << "/" << d[num1].getmonth() << "/" << d[num1].getdate() << " < " ;
		cout << d[num2].getyear() << "/" << d[num2].getmonth() << "/" << d[num2].getdate() << endl ;
	}
	else if (d[num1] == d[num2]) {
		cout << d[num1].getyear() << "/" << d[num1].getmonth() << "/" << d[num1].getdate() << " == " ;
		cout << d[num2].getyear() << "/" << d[num2].getmonth() << "/" << d[num2].getdate() << endl ;
	}
	return 0;	
}

