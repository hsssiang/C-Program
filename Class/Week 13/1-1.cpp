#include <cstdlib>
#include <vector>
#include <cstdio>
#include <string>
#include <iostream>
#include "TwoD.h"

using namespace hsiang;
using namespace std;

int main(){
	int i, j;
	cout << "Enter row and column dimensions of the array" <<endl;
	cin >> j >> i ;
	TwoD one(j,i);
	one.input();
	cout << "Enter row and column dimensions of the array"<<endl;
	cin >> j >> i ;
	TwoD two(j,i);
	two.input();
	cout << "matrix3 = matrix2" << endl;
	cout << "martix3 =" << endl;
	TwoD three(j,i);
	three = two;
	three.output();
	cout << "matrix3 = matrix1 + matrix2" << endl;
	cout << "martix3 =" << endl;
	three = one + two;
	three.output();
	return 0;
}
