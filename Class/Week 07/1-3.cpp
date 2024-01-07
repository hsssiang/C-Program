#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct point{
	int x = 0;
	int y = 0;
};

struct vec{
	struct point input[2];
	int v[2]; 
};	

int main(){
	struct vec vector[2];
	cout << "A" << endl;
	cin >> vector[0].input[0].x >> vector[0].input[0].y;
	cout << "B" << endl;
	cin >> vector[0].input[1].x >> vector[0].input[1].y;
	vector[0].v[0] = ( vector[0].input[1].x - vector[0].input[0].x );
	vector[0].v[1] = ( vector[0].input[1].y - vector[0].input[0].y );
	cout << "C" << endl;
	cin >> vector[1].input[0].x >> vector[1].input[0].y;
	cout << "D" << endl;
	cin >> vector[1].input[1].x >> vector[1].input[1].y;
	vector[1].v[0] = ( vector[1].input[1].x - vector[1].input[0].x );
	vector[1].v[1] = ( vector[1].input[1].y - vector[1].input[0].y );
	if ((vector[1].v[0] * vector[0].v[0]) + (vector[1].v[1] * vector[0].v[1]) == 0 ) cout << "vertical" <<endl;
	else  cout << "not vertical" <<endl;
	return 0;
}	

