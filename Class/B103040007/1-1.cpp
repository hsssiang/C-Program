#include <iostream>
#include <cmath>

using namespace std;

class complex{
public:
	complex(){
		real = 0;
		imag = 0;
	}
	complex ( int a , int b ){
		real = a;
		imag = b;
	}
	friend istream& operator >> ( istream& input , complex& obj ){
		cin >> obj.real >> obj.imag;
		return input;
	}
	friend ostream& operator << ( ostream& output , const complex& obj ){
		cout << "(" << obj.real  << "," << obj.imag << ")" << endl;
		return output;
	}
	friend complex operator + ( complex& obj1 , complex& obj2 ){
		complex Ans ( (obj1.real + obj2.real) , (obj1.imag + obj2.imag) );
		return Ans;
	}
	friend complex operator * ( complex& obj1 , int c ){
		complex Ans ( (obj1.real * c ) , (obj1.imag * c) );
		return Ans;
	}
	friend complex operator ++ ( complex& obj1 , int ){
		complex Ans (  obj1.real++ , obj1.imag++ );
		return Ans;
	}
	friend complex& operator ++ ( complex& obj1 ){
		obj1.real = ++ obj1.real;
		obj1.imag = ++ obj1.imag;
		return obj1;
	}
	friend complex& operator += ( complex& obj1 , complex& obj2 ){
		obj1.real = obj1.real + obj2.real;
		obj1.imag = obj1.imag + obj2.imag;
		return obj1;
	}
	friend complex& operator *= ( complex& obj1 , complex& obj2 ){
		int a,b;
		a = (obj1.real * obj2.real - obj1.imag * obj2.imag );
		b = (obj1.imag * obj2.real + obj1.real * obj2.imag );
		obj1.real = a;
		obj1.imag = b;
		return obj1;
	}
private:
	int real;
	int imag;
};

int main(){
	complex a,b,d;
	int c;
	cout << "Enter the pair A(real, imag1): ";
	cin >> a;
	cout << "Enter the pair B(real, imag1): ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;
	cout << "A: " << a;
	cout << "B: " << b;
	cout << "A+B" << a + b ;
	cout << "A*C: " << a * c ;
	cout << "A++: " << a++;
	cout << "++A: " << ++a;
	a += b;
	cout << "A += B, A: " << a;
	a *= b;
	cout << "A *= B, A: " << a;
	return 0;
}	
