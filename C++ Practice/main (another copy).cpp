#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

class temperature{
public:
	temperature(){
		kelvin = 0;
		celisus = 0;
		fahreneit = 0;
	}
	temperature( float input ){
		fahreneit = input;
	}
	void set (){
		celisus = (fahreneit-32) * (5./9.);
		kelvin = celisus + 273.15;
	}
	friend istream& operator >> ( istream& input, temperature& obj ){
		cin >> obj.fahreneit;
		return input;
	}
	friend ostream& operator << ( ostream& output, temperature& obj ){
		cout << "In Kelvin: " <<  obj.kelvin << endl;
		cout << "In Celisus: " << obj.celisus << endl;
		cout << "In Fahreneit: " << obj.fahreneit << endl;
		return output;
	}
	friend bool operator == ( temperature& obj1 , temperature& obj2 ) {
		if ( obj1.kelvin == obj2.kelvin ) return true;
		else return false;
	}
private:
	float kelvin;
	float celisus;
	float fahreneit;
};

int main (){
	float input1, input2;
	while ( 1 ){
		cout << "Input a temperature in Fahrenheit." << endl;
		temperature one ( input1 );
		cin >> one;
		one.set();
		cout << one;
		cout << "Input a temperature in Fahrenheit." << endl;
		temperature two ( input2 );
		cin >> two;
		two.set();
		cout << two;
		if ( one == two ) cout << "temperature1 == temperature2 : true" << endl;
		else cout << "temperature1 == temperature2 : false" << endl;
	}
	return 0;
}
