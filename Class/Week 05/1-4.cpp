#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void circle_area ( double , double & );
void circle_perimeter ( double ,  double & );

int main(){
	double number;
	string str;
	double area , perimeter;
	cout << "Enter a number: " ;
	cin >> number;
	cout << "Enter r(radius) or d(diameter): ";
	cin >> str;
	if (str == "r") {
		circle_area(number , area );
		circle_perimeter (number*2 , perimeter );
		cout << "Area of the circle is: " << area << endl;
		cout << "Perimeter of the circle is: " << perimeter << endl;
	}
	else if (str == "d") {
		circle_area(number/2 , area );
		circle_perimeter (number , perimeter );
		cout << "Area of the circle is: " << area << endl;
		cout << "Perimeter of the circle is: " << perimeter << endl;
	}
	else cout << "Error" <<endl;
	return 0;
}
	
void circle_area ( double number, double & area ){
	area = number*number*3.14;
}
void circle_perimeter ( double number,  double &  perimeter){
	perimeter = number*3.14;
}


