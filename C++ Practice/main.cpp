#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Television {
	private:
		string displaytype;
		double dimension;
		int row;
		string ** connectivitysupport;
	public:
		Television ( string type, double dim, int r ){
			displaytype = type;
			dimension = dim;
			row = r;
			int i;
			connectivitysupport = new string *[r];
			for ( i = 0 ; i < r ; i ++ ){
				connectivitysupport[i] = new string[80];
			}
		}
		Television (){
			displaytype = "";
			dimension = 0;
			row = 0;
			int i;
			connectivitysupport = new string *[1];
			for ( i = 0 ; i < 1 ; i ++ ){
				connectivitysupport[i] = new string;
			}
		}
		Television ( const Television& obj ){}
		void set_connecttype( int index , string type ){
			cout << type << endl;
			connectivitysupport[index] = type;
		}
		void set( string type, double dim, int r ){
			displaytype = type;
			dimension = dim;
			row = r;
			int i;
			connectivitysupport = new string *[r];
			for ( i = 0 ; i < r ; i ++ ){
				connectivitysupport[i] = new string[80];
			}
		}
		friend ostream& operator << ( ostream& out , Television &obj ){
			out << "Display type:" << obj.displaytype << endl;
			out << "Dimension(inches): " << obj.dimension << endl;
			int i;
			out << "connectivity support types:" << endl;
			for ( i = 0 ; i < obj.row ; i++ ){
				out << *(obj.connectivitysupport[i]) << endl;
			}
			return out;
		}

};

int main (){
	string type;
	int mode, num, i, index = 0;
	double dim;
	cout << "Enter Default TV display type :" << endl;
	cin >> type;
	cout << "Enter default TV Dimesion :" << endl;
	cin >> dim;
	cout << "Enter the number of connectivity modes :" << endl;
	cin >> mode;
	Television defult( type , dim , mode );
	cout << "Enter default TV connectivity support types :" << endl;
	for ( i = 0 ; i < mode ; i ++ ){
		cin >> type;
		defult.set_connecttype( i , type );
	}
	cout << "Default TV mode :" << endl;
	cout << defult;
	cout << "Enter TV numbers :";
	cin >> num;
	Television user[num];
	while ( index != -1 ){
		cout << "Enter index of TVs required to custimization(input -1 to end)" << endl;
		cin >> index;
		cout << "Enter TV#" << index << " display type :" << endl;
		cin >> type;
		cout << "Enter TV#" << index << " Dimesion :" << endl;
		cin >> dim;
		cout << "Enter the number of connectivity modes :" << endl;
		cin >> mode;
		user[index].set( type , dim , mode );
		cout << "Enter TV#" << index << " connectivity support types :" << endl;
		for ( i = 0 ; i < mode ; i ++ ){
			cin >> type;
			user[index].set_connecttype( index , type );
		}
	}
	for ( i = 0 ; i < num ; i ++ ){
		cout << "TV#" << i << endl;
		cout << user[i];
	}
	return 0;
}
