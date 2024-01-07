#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class charinarray{
public:
	charinarray(){
		int i;
		for ( i = 0 ; i < 10 ; i ++ ){
			array[i] = '#';
		}
		array[i] = '\0';
	}
	void set ( int index , char tar ){
		array[index] = tar; 
	}
	void set ( int index ){
		array[index] = '#'; 
	}
	void setsz ( int size_input ){
		size = size_input;
	}
	int getsz (){
		return size;
	}
	char getchar( int index ){
		return array[index];
	}
	char operator [] ( int index ){
	if ( index < this -> getsz() ){
		return this -> getchar(index);
	}
}
private:
	char array[110];
	int size;
};

ostream& operator << ( ostream& output, charinarray& obj1 ){
	int i = 0;
	while ( obj1.getchar( i ) != '\0' ){
		cout << obj1.getchar( i ) << " ";
		i ++;
	}
	cout << endl;
	return output;
}
int main (){
	int input,i;
	char tar;
	charinarray one;
	cout << "Default output(10):" << one;
	cout << "Size: 10" << endl;
	cout << "---claer array---" << endl;
	cout << "First sz number of the char array to #";
	cin >> input;
	one.setsz(input);
	for ( i = 0 ; i < input ; i < i ++ ){
		one.set( i );
	}
	for ( i = 0 ; i < input ; i < i ++ ){
			cout << one[i] << " ";
	}
	cout << endl;
	cout << "Size: " << one.getsz() << endl;
	while ( input != -1 ){
		cout << "First sz number of the char array to ?:";
		cin >> input;
		one.setsz(input);
		cin >> tar;
		for ( i = 0 ; i < input ; i < i ++ ){
			one.set( i , tar );
		}
		for ( i = 0 ; i < input ; i < i ++ ){
			cout << one[i] << " ";
		}
		cout << endl;
		cout << "Size: " << one.getsz() << endl;
	}
	return 0;
}
