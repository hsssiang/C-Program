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
	int getPocket (){
		cout << "You have : ";
		cout << one + five*5 + ten*10 << endl;
		return (one + five*5 + ten*10);
	}
	void printPocket (){
		cout << "Remain : " << "one dollars: " << one << " five dollars: " << five << " ten dollars: " << ten << endl;
		cout << "Total : "<<one + five*5 + ten*10 << endl;
	}
	void payment ( int pay ){
		int pay_reamin = 0, pay_ram = pay, temp = 0 , give_back = 0 , give_back_one , give_back_five;
		if ( pay_ram >= one && one > 0 ) {
			pay_ram -= one;
			one = 0;
		}
		//printPocket();
		//cout << pay_ram << endl;
		if ( pay_ram > 0 && five > 0 ) {
			while ( temp < pay_ram && five > 0 ){
				temp += 5;
				five --;
			}
			if ( five < 1 ) {
				pay_ram -= temp;
			}
			else {
				give_back = temp - pay_ram;
				pay_ram = 0;
			}
		}
		//printPocket();
		//cout << pay_ram << endl;
		if ( give_back != 0 && give_back > 4){
			give_back_one = give_back % 5;
			give_back_five = 1;
		}
		else give_back_one = give_back;
		temp = 0;
		give_back = 0;
		if ( pay_ram > 0 && ten > 0 ) {
			while ( temp < pay_ram && ten > 0 ){
				temp += 10;
				ten --;
			}
			if ( temp >= pay_ram ) {
				give_back = temp - pay_ram;
			}
		}
		if ( give_back != 0 && give_back > 4){
			give_back_one += give_back % 5;
			give_back_five += 1;
		}
		else give_back_one += give_back;
		one += give_back_one;
		five += give_back_five;
		printPocket();
	}

};

int main(){
	class pocket user1;
	int one , five, ten, pay , pocket_before;
	cout << "How many one-dollar coins?" << endl;
	cin >> one;
	cout << "How many five-dollar coins?" << endl;
	cin >> five;
	cout << "How many ten-dollar coins?" << endl;
	cin >> ten;
	user1.setPocket ( one , five , ten );
	pocket_before = user1.getPocket();
	cout << "How much did you pay by cash?" << endl;
	cin >> pay;
	if ( pay > pocket_before ) cout << "Insufficient balance" << endl;
	else user1.payment( pay );
	return 0;
}	

