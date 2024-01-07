
#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

struct node
{
	int deta;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

void push ( int );
void view ( void );
int isEmpty ( void );
int pop ( void );

int main (){
	int input = 0, counter = 1, num = 0;
	while ( input != 3 ){	
		cout << "1 for push in queue, 2 for pop from queue, 3 for exit: " << endl;
		cin >> input;
		if ( input == 1 ){
			cout << "Enter a number" << endl;
			cin >> num;
			push ( num );
			cout << "In queue: ";
			view();
		}
		else if ( input == 2 ){
			if ( head == tail ) cout << "queue is empty";
			else {
				pop();
				cout << "In queue: ";
				view();
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
	struct node *new_queue;
	new_queue = (struct node *)malloc ( sizeof(struct node) );
	new_queue -> deta = input;
	new_queue -> next = NULL;
	if ( head == NULL ){
		head = new_queue;
		tail = new_queue;
	}
	else {
		tail -> next = new_queue;
		tail = new_queue;
	}
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
		cout << temp -> deta << " ";
		temp = temp -> next;
	}
}
