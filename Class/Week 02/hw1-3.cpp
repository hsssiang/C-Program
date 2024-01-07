#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int input[4], max = 0 , det[3], i, j, temp, a, b, c;
	cout << " Enter three integers: " << endl;
	cin >> input[1];
	cin >> input[2];
	cin >> input[3];
	a = input[1];
	b = input[2];
	c = input[3];
	for ( i = 0 ; i < 3 ; i ++ ){
		for ( j = 1 ; j <= 3 ; j ++ ){
			if ( input[j] >= max && input[j]!= -1 ){
				max = input[j];
				temp = j;
			} 
		}
		det[i] = input[temp];
		input[temp] = -1;
		max = 0;
	} 
	if ( det[2] + det[1] <= det[0] ) cout << a << " " << b <<" " << c << " " << "They can not form a triangle." << endl;
	else {
		if ( det[0]*det[0] < (det[1]*det[1] + det[2]*det[2]) ) cout << a << " " << b << " " << c << " " << "from an Acute triangle."<< endl;
		else if ( det[0]*det[0] > (det[1]*det[1] + det[2]*det[2]) ) cout << a << " " << b << " " << c <<" " << "from an Obtuse triangle."<< endl;
		else if ( det[0]*det[0] == (det[1]*det[1] + det[2]*det[2]) ) cout << a << " " << b << " " << c <<" " << "from an Right triangle."<< endl;
	}
}	

