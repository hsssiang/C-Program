#include<iostream>
using namespace std;

int Fib (int);

int main(void)
{
	int i;
	for (i = 0 ; i < 21 ; i ++){ 
		cout << Fib ( i ) << " ";
	}
	cout << endl;
	return 0;
}

int Fib ( int counter ){
	if ( counter == 1 || counter == 0 ){
		return 1;
	}
	else return ( Fib ( counter - 1 ) + Fib ( counter - 2 ) );
}


	
