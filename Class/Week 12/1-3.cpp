
#include <iostream>
#include <cmath>
#include <string> 
#include <vector>

using namespace std;

vector <int> pri;

struct node
{
	int deta;
	struct node *next;
};

struct node *head = NULL;

void push ( int );
void view ( void );
int isEmpty ( void );
int pop ( void );

int main (){
	int input = 0, counter = 1, num = 0, i;
	while ( input != 3 ){	
		cout << "1 for push in stack, 2 for pop from stack, 3 for exit: " << endl;
		cin >> input;
		if ( input == 1 ){
			cout << "Enter a number" << endl;
			cin >> num;
			push ( num );
			cout << "In stack: " ;
			view();
			for ( i = pri.size()-1 ; i >= 0 ; i -- ){
				cout << pri[i] << " ";
			}
			pri.clear();
		}
		else if ( input == 2 ){
			if ( head -> next == NULL ) cout << "stack is empty";
			else{
				pop();
				cout << "In stack: ";
				view();
				for ( i = pri.size()-1 ; i >= 0 ; i -- ){
					cout << pri[i] << " ";
				}
				pri.clear();
			}
		}
		else if ( input == 3 ){
			break;
		}
		else {
			cout << "error" << endl;
		}
		cout << endl;
	}
	return 0;
}

void push ( int input ){
	struct node *new_stack;
	new_stack = (struct node *)malloc ( sizeof(struct node) );
	new_stack -> deta = input;
	new_stack -> next = head;
	head = new_stack;
}

int pop ( void ){
	int value;
	struct node * temp = NULL;
	temp = head;
	head = head -> next;
	value = temp -> deta;
	free ( temp );
	return value;
}

void view ( ){
	int value;
	struct node * temp = head;
	while ( temp != NULL ){
		pri.push_back ( temp -> deta );
		temp = temp -> next;
	}
}
