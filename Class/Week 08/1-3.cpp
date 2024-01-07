#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class pocket {
private:
	int one, five , ten;
public:
	pocket (){
		one = 0;
		five = 0;
		ten = 0;
	}
	void setPocket ( int input01 , int input02 , int input03 ){
		one = input01;
		five = input02;
		ten = input03;
	}
	void getPocket (){
		cout << "You have : ";
		cout << one + five*5 + ten*10 << endl;
	}

};

int main(){
	class pocket user1;
	int one , five, ten;
	cout << "How many one-dollar coins?" << endl;
	cin >> one;
	cout << "How many five-dollar coins?" << endl;
	cin >> five;
	cout << "How many ten-dollar coins?" << endl;
	cin >> ten;
	user1.setPocket ( one , five , ten );
	user1.getPocket();
	return 0;
}	

