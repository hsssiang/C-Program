#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<iomanip>
using namespace std;

struct employeedata {
	float cor;
	float per;
	float ide;
	float total;
	int fianl;
};

int main(){
	float inputScore = 0; 
	int i;
	struct employeedata emp[6];
	for ( i = 0 ; i < 1 ; i ++ ){
		cout << "Core competency : ";
		cin >> emp[i].cor ;
		cout << "Performance evaluation : ";
		cin >> emp[i].per ;
		cout << "Ideation : ";
		cin >> emp[i].ide ;
		emp[i].total = (emp[i].cor * (3)) + ((emp[i].per * 5)/3) + (emp[i].ide * (2));
		if ( emp[i].total >= 80 ) emp[i].fianl = 1;
		else if ( emp[i].total >= 60 && emp[i].total <= 79 ) emp[i].fianl = 2;
		else if ( emp[i].total >= 50 && emp[i].total <= 59 ) emp[i].fianl = 3;
		else emp[i].fianl = 4;
	}
	for ( i = 0 ; i < 1 ; i ++ ){
		cout << "Number	" << "Total " << "Point " << endl;
		cout << i+1 << " 	" << setiosflags(ios::fixed) << setprecision(2) << emp[i].total << "		"<< emp[i].fianl << endl;	
	}
	
	return 0;
}	

