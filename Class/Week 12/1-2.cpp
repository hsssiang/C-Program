#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main(){
	typedef int* IAP; 
	int i, j, x, y, tda[100][100], temp;
	cout << "Pleaes enter the number of rows and columns :" << endl;
	cin >> x >> y;  
	IAP *A = new IAP[x]; 
	for( i = 0; i < x; i++){
      		A[i] = new int[y];
	}
	cout << "Please enter all elements :" << endl;
	for ( i = 0 ; i < x ; i ++ ){
		for ( j = 0 ; j < y ; j ++ ){
			cin >> temp;
			A[i][j] = temp;
			tda[i][j] = temp;
		}
	}
		cout << "2rd arrat adress (General method) :" << endl;
	for ( i = 0 ; i < x ; i ++ ){
		for ( j = 0 ; j < y ; j ++ ){
			cout << tda[i][j] << "@ " << &tda[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "2rd arrat adress (Pointer's method) :" << endl;
	for ( i = 0 ; i < x ; i ++ ){
		for ( j = 0 ; j < y ; j ++ ){
			cout << A[i][j] << "@ " << &A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}	
