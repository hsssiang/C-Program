#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int *p1;
	int *p2;
	int i1 = 8 , i2 = 10;
	cout << "Value of i1 is : " << i1 << "	, start at : " << &i1 << endl;
	cout << "Value of i2 is : " << i2 << "	, start at : " << &i2 << endl;
	cout << "When we let i1 = i2....." << endl;
	i1 = i2;
	cout << "Value of i1 is : " << i1 << "	, start at : " << &i1 << endl;
	cout << "Value of i2 is : " << i2 << "	, start at : " << &i2 << endl;
	cout << "When we let p1 = p2....." << endl;
	p2 = &i2;
	p1 = p2;
	cout << "Value of i1 is : " << *p1 << "	, start at : " << p1 << endl;
	cout << "Value of i2 is : " << *p2 << "	, start at : " << p2 << endl;
	return 0;
}	
