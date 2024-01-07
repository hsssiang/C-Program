#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main (){
	vector <int> v;
	int clothes, i;
	cout << "Please enter the clothes: " ;
	cin >> clothes;
	for ( i = 0 ; i < clothes ; i ++) {
		v.push_back(i+1);
	}
	for ( i = 0 ; i < clothes ; i ++) {
		cout << v[i] << " ";
	}
	cout << endl;
	while (v.size() != 1){
		for ( i = 2 ; i < v.size() ; i += 2 ){
			v.erase(v.begin()+i);
		}
		for ( i = 0 ; i < v.size() ; i ++ ){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
