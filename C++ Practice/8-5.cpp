#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

class Vector2D{
public:
	Vector2D ( int a, int b ){
		v.push_back(a);
		v.push_back(b);
	}
	void reset (){
		v.clear();
	}
	int get ( int index ){
		return v[index];
	}
private:
	vector <int> v;
};

int operator * ( Vector2D& obj1 , Vector2D& obj2 ){
	int ans;
	ans = ( obj1.get(0)*obj2.get(0) + obj1.get(1)*obj2.get(1) );
	return ans;
}
int main (){
	int a, b, c, d;
	while ( a != -1 ){
		cin >> a >> b >> c >> d;
		Vector2D onex ( a, b );
		Vector2D oney ( c, d );
		cout << "(" << a << "," << b << ")*(" << c << "," << d << ") = " << onex * oney << endl;
		onex.reset();
		oney.reset();
	}
	return 0;
}
