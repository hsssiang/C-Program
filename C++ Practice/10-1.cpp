#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class TwoD {
	private : 
		double ** data;
		int col, row;
	public:
		TwoD ( int r , int c  ){
			int i;
			row = r;
			col = c;
			data = new double *[row];
			for ( i = 0 ; i < row ; i ++ ){
				data[i] = new double [col];
			}
		}
		TwoD (){}
		int getr (){
			return row;
		}
		int getc (){
			return col;
		}
		void set ( double input , int i , int j ){
			data[i][j] = input;
		}
		double get ( int i , int j ){
			return data[i][j];
		}
		TwoD operator + ( TwoD obj1 ){
			TwoD newtd ( this -> row ,  this -> col );
			int i, j;
			for ( i = 0 ; i < this -> row ; i ++ ){
				for ( j = 0 ; j < this -> col ; j ++ ){
					newtd.set( (this -> get ( i , j ) +  obj1.get(i , j) ), i , j );
				}
			} 
			return newtd;
		} 
		TwoD operator = ( TwoD obj1 ){
			int i, j;
			for ( i = 0 ; i < obj1.row ; i ++ ){
				for ( j = 0 ; j < obj1.col ; j ++ ){
					this -> data[i][j] = obj1.data[i][j];
				}
			}
			return obj1;
		} 
};

int main (){
	int i , j, c,r;
	double input;
	cout << "Enter the row and column dimensions of the array" <<endl;
	cin >> r >> c; 
	TwoD one ( r , c );
	for ( i= 0 ; i < r ; i ++ ){
		for ( j = 0  ; j < c ; j ++ ){
			cin >> input;
			one.set ( input , i , j );
		}
	}
	cout << "Echoing the 2 dim, array, matix1" << endl;
	for ( i= 0 ; i < r ; i ++ ){
		for ( j = 0 ; j < c ; j ++ ){
			cout << (int)one.get( i , j ) << " " ;
		}
		cout << endl;
	}
	cout << "Enter the row and column dimensions of the array" <<endl;
	cin >> r >> c; 
	TwoD two ( r , c );
	for ( i = 0 ; i < r ; i ++ ){
		for ( j = 0 ; j < c ; j ++ ){
			cin >> input;
			two.set ( input , i , j );
		}
	}
	cout << "Echoing the 2 dim, array, matix2" << endl;
	for ( i = 0 ; i < r ; i ++ ){
		for ( j = 0 ; j < c ; j ++ ){
			cout << (int)two.get( i , j ) << " " ;
		}
		cout << endl;
	}
	cout << "Assigning matrix 2 to matrix 3" << endl;
	cout << "Displaying the 2 dim array, mtrix3 resulting from assignment" << endl;
	cout << "Row " << one.getr() << " Cols " << one.getc() << endl;
	TwoD three ( r , c );
	three = two;
	for (  i= 0 ; i < r ; i ++ ){
		for ( j = 0 ; j < c ; j ++ ){
			cout << (int)three.get( i , j ) << " " ;
		}
		cout << endl;
	}
	cout << "Displaying the 2 dim array, sum of matrix 1 and 2" << endl;
	cout << "Row " << one.getr() << " Cols " << one.getc() << endl;
	three = two + one;
	for ( i = 0 ; i < r ; i ++ ){
		for ( j = 0 ; j < c ; j ++ ){
			cout << (int)three.get( i , j ) << " " ;
		}
		cout << endl;
	}
	return 0;
}
