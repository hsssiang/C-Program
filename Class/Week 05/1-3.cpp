#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


void order ( string str );
void order ( );

int main(){
	string str , tds;
	cout << "Would you like to have today's special?(y/n):";
	cin >> tds;
	if ( tds == "y" ) order();
	else if ( tds == "n" ){
		cout << "What would you like to order?(A/B):";
		cin >> str;
		order (str);
	}
	else cout << "Error!!" << endl;
	return 0;
}	


void order (){
	cout << "steak" <<endl;
} 

void order ( string str ){
	if ( str == "A" ) cout << "pork chop" << endl;
	else if ( str == "B" ) cout << "chicken steak" << endl;
}  	
