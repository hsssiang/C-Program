#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Weight {
	public:
		double setWeightPounds ( double input ){
			pound = input;
			return pound;
		}
		double setWeightKilograms ( double input ){
			pound = input * 2.21;
			return pound;
		}
		double setWeightOunces ( double input ){
			pound = input / 16;
			return pound;
		}
	private:
		double pound;
};

int main(){
	string scale;
	double weightInput , output ;
	class Weight user01;
	cout << "Please enter the wight scale : " ;
	cin >> scale;
	cout << "Please enter your weight : " ;
	cin >> weightInput;
	if (scale == "pounds" ) {
		output = user01.setWeightPounds( weightInput );
		cout << "Covert " << weightInput << " (" << scale << ") into pounds = " << weightInput << "*1" << " = " << output << " pounds" <<endl;  
	}
	else if ( scale == "kilograms" ){
		output = user01.setWeightKilograms( weightInput );
		cout << "Covert " << weightInput << " (" << scale << ") into pounds = " << weightInput << "*2.21" << " = " << output << " pounds" <<endl;    
	}
	else if ( scale == "ounces" ){
		output = user01.setWeightOunces( weightInput );
		cout << "Covert " << weightInput << " (" << scale << ") into pounds = " << weightInput << "/16" << " = " << output << " pounds" <<endl;   
	}
	return 0;
}	

