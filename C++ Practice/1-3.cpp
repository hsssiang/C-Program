#include <iostream>
#include <cmath>
#include <string> 
#include <vector>

using namespace std;

vector <int> print;

class stack *head = NULL;
class stack *tail = NULL;
class stack *tempp = NULL;

class stack{
	private:
		int value;
		stack *next;
	public:
		stack (){
			value = 0;
			next = NULL;
		}
		void push( int a, int val , stack* obj ){
			value = val;
			next = NULL;
			head = this;
		}
		void push( int val , stack* obj ){
			value = val;
			next = head;
			head = this;
		}
		void pop ( ){
			head = this -> next;
		}
		stack* view (){
			print.push_back( this -> value );
			return this -> next;
		}
		stack* getad (){
			return this -> next;
		}
};

int main(){
	int fun = 0, val;
	cout << "1 for push in stack, 2 for pop from stack, 3 for exit: " << endl;
	cin >> fun;
	if ( fun == 1 ){
		cout << "Enter a number" << endl;
		cin >> val;
		stack* new_st = new stack;
		new_st -> push ( val , new_st );
		cout << "In stack: ";
		tempp = head;
		tempp -> view();
	}
	else if ( fun == 2 ) cout << "Empty";
	cout << endl;
	while ( 1 ){
		cout << "1 for push in stack, 2 for pop from stack, 3 for exit: " << endl;
		cin >> fun;
		int i;
		if ( fun == 3 ) break;
		else if ( fun == 1 ){
			cout << "Enter a number" << endl;
			cin >> val;
			stack* new_st = new stack;
			new_st -> push ( val , new_st );
			cout << "In stack: ";
			tempp = head;
			while ( tempp -> getad () != NULL ){
				tempp = tempp -> view();
			}
			for ( i = print.size() - 1 ; i >= 0 ; i ++ ){
				cout << print[i] << " ";
			}
			print.clear();
		}
		else if ( fun == 2 ){
			head -> pop();
			cout << "In stack: ";
			tempp = head;
			while ( (tempp -> getad () != NULL) && head != NULL ){
				tempp = tempp -> view();
			}
			for ( i = print.size() - 1 ; i >= 0 ; i ++ ){
				cout << print[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}	
