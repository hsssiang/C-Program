#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class BoxofProduce{
public:
	int i;
	BoxofProduce( int a ){
		for ( i = 0 ; i < a ; i ++ ){
			box.push_back( rand() % 5 );
		}
	}
	void set ( int input ){
		box.push_back ( input );
	}
	int getvalue( int index ){
		return box[index];
	}
	int getsize( ){
		return box.size();
	}
	friend ostream& operator << ( ostream& out , const BoxofProduce& obj ){
		int i;
		for ( i = 0 ; i < obj.box.size() ; i ++ ){
			cout << " (" << i+1 << ") " ;
			switch ( obj.box[i] ){
				case 0:
					cout << "Broccoli" << endl ;
					break;
				case 1:
					cout << "Tomoto" << endl ;
					break;
				case 2:
					cout << "Kiwi" << endl ;
					break;
				case 3:
					cout << "Kale" << endl ;
					break;
				case 4:
					cout << "Tomatillo" << endl ;
					break;
			}
		}
		cout << endl;
		return out;
	}
private:
	vector <int> box;
};

BoxofProduce operator + ( BoxofProduce& obj1 , BoxofProduce& obj2){
	int i;
	for ( i = 0 ; i < obj2.getsize( ) ; i ++ ){
		obj1.set( obj2.getvalue(i) );
	}
	return obj1;
}

int main (){
	srand( time(0) );
	string input;
	char function;
	int index, produce, i;
	BoxofProduce one((rand() % 10 + 1)), two((rand() % 10 + 1));
	cout << "The box contains: "<< endl;
	cout << one;
	cout << "The box contains: "<<endl;
	cout << two;
	cout << "The box contains: "<<endl;
	cout << one + two;
	return 0;
}
