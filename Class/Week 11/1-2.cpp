#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class date{
	private:
		int year;
		int month;
		int day;
	public:
		date (){
			year = 0;
			month = 0;
			day = 0;
		}
		void set ( int a , int b , int c ){
			year = a;
			month = b;
			day = c;
		}
		void get (){
			cout << year << "/" << month << "/" << day  << "." << endl;
		}
		int getd () {return day;}
		int getm () {return month;}
		int gety () {return year;}
};

date operator + ( date& obj , int input ){
	bool fltom = true, coy = false;
	int remain = input, monthp = 0, dayp = 0, yearp = 0 , md;
	int od = obj.getd(), om = obj.getm(), oy = obj.gety(), opd = input;  
	while ( remain > 0 ){	
		if ( om + monthp == 1 || om + monthp == 3 || om + monthp == 5 || om + monthp == 7 || om + monthp == 8 || om + monthp == 10 || om + monthp == 12 ) md = 31;
		else if ( om + monthp == 4 || om + monthp == 6 || om + monthp == 9 || om + monthp == 11 ) md = 30;
		else if ( om + monthp == 2) md = 28;
		if ( od + remain > md ){
			monthp ++;
			remain -= ( md - od );
			od = 0;
			fltom = false;
		}
		else if ( od + remain <= md && fltom ){
			od += remain;
			remain = 0;
			fltom = false;
			obj.set( oy , om , od );
			return obj;
		}
		else if ( od + remain < md ){
			dayp += remain;
			remain = 0;
		}
		if ( monthp + om > 12 ){
			yearp++;
			om = 1;
			monthp = 0;
			coy = true;
		}
	}
	if ( coy ){
		oy += yearp;
		om += monthp;
		obj.set( oy , om , dayp );
		return obj;
	}
	else {
		om += monthp;
		obj.set( oy , om , dayp );
		return obj;
	}
}

int main(){
	date d[4];
	int i, plus, a, b, c, day;
	string in;
	cout << "Please enter 3 dates to test: " << endl;
	for ( i = 1 ; i < 4 ; i ++ ){
		cout << "Enter date" << i << ": " ;  
		cin >> a >> b >> c;
		d[i].set ( a , b , c );
	}
	for ( i = 1 ; i < 4 ; i ++ ){
		cout <<  "date" << i << ": ";
		d[i].get();
	}
	cout << "Choose a date to add (+): ";
	cin  >> in;
	if ( in[4] == '1' ) day = 1;
	else if ( in[4] == '2' ) day = 2;
	else if ( in[4] == '3' ) day = 3;
	cout << " + ";
	cin >> plus;
	d[0] = d[day] + plus;
	d[0].get();
}
