#include <iostream>
#include <string>
using namespace std;

void str_print ( string , int len = 0);

int main(){
	string str;
	cout << "Enter your string:" << endl;
	cin >> str;
	str_print ( str );
	str_print ( str , str.length() );
	return 0;
}	

void str_print ( string str , int len ){
	if ( len == 0 ) cout << "Output : " << str << "!" <<endl;
	else if ( len == 1 ) cout << "Output : " << str << "!" <<endl;
	else if ( len >= 5 ) cout << "Output : " << str << "~" <<endl;
	else cout << "Output : " << str << "*" <<endl;
}
