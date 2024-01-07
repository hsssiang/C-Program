#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Money{
public:
	Money(){
		dollars = 10.09;
	}
	Money(double amount){
		dollars = amount;
	}
	double getAmount()const{
		return dollars;
	}
	double getd()const{
		return perdoll;
	}
	void set( double change ){
		dollars = change;
	}
	void setd( double change ){
		perdoll = change;
	}
	friend const Money operator + ( const Money& amount1, const Money& amount2 ){
		return Money ( amount1.dollars + amount2.dollars );
	}
	friend const Money operator - ( const Money& amount1, const Money& amount2 ){
		return Money ( amount1.dollars - amount2.dollars );
	}
	friend const Money operator - ( const Money& amount );
	friend bool operator == ( const Money& amount1, const Money& amount2 ){
		if ( amount1.dollars == amount2.dollars )return true;
		else return false;
	}
	friend bool operator >= ( const Money& amount1, const Money& amount2 ){
		if ( amount1.dollars > amount2.dollars )return true;
		else return false;
	}
	friend bool operator <= ( const Money& amount1, const Money& amount2 ){
		if ( amount1.dollars < amount2.dollars )return true;
		else return false;
	}
	friend ostream& operator << ( ostream& outputStream, const Money& amount ){
		cout << amount.dollars;
		return outputStream;
	}
	friend istream& operator >> ( istream& inputStream, Money& amount ){
		cin >> amount.dollars;
		return inputStream;
	}
	const Money percent ( int percentFigure , Money& your)const{
		cout << "Your amount is $" << dollars << endl;
		cout << "My amount is $" << your.getAmount() << endl;
		your.setd (your.getAmount()* (percentFigure/100.));
		cout << percentFigure << "%" << " of your amount is $" << your.getd() << endl;
		cout << "15%" << " of your amount is $" << dollars*(0.15) << endl;
	}
private:
	float dollars;
	float perdoll;
};


int main (){
	int input;
	Money yourAmount, myAmount(10.09), tempp, tempm;
	cout << "Enter an amount of money: ";
	cin >> yourAmount;
	cout << "Enter a percent you wish to take of your amount: ";
	cin >> input;
	cout << yourAmount << endl;
	cout << myAmount << endl;
	myAmount.percent( input , yourAmount );
	if ( yourAmount == myAmount ) {
		cout << "We have same money." << endl;
		tempp = yourAmount + myAmount;
		tempm = yourAmount - myAmount;
		cout << yourAmount << " + " << myAmount << " equals $" << tempp << endl;
		cout << yourAmount << " - " << myAmount << " equals $" << tempm << endl;
	}
	else if ( yourAmount >= myAmount ) {
		cout << "One of us is richer." << endl;
		tempp = yourAmount + myAmount;
		tempm = yourAmount - myAmount;
		cout << yourAmount << " + " << myAmount << " equals $" << tempp << endl;
		cout << yourAmount << " - " << myAmount << " equals $" << tempm << endl;
	}
	else if ( yourAmount <= myAmount ) {
		cout << "One of us is richer." << endl;
		tempp = yourAmount + myAmount;
		tempm = myAmount - yourAmount;
		cout << myAmount << " + " << yourAmount << " equals $" << tempp << endl;
		cout << myAmount << " - " << yourAmount << " equals $" << tempm << endl;
	}
	if ( tempp == tempm ) {
		cout << "Your amount is $" << yourAmount << endl;
		cout << "My amount is $" << myAmount << endl;
	}
	else if ( tempp >= tempm) {
		cout << "Your amount is $" << yourAmount << endl;
		cout << "My amount is $" << myAmount << endl;
	}
	else if ( tempp >= tempm ) {
		cout << "Your amount is $" << yourAmount << endl;
		cout << "My amount is $" << myAmount << endl;
	}
	return 0;
}
