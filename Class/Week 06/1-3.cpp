#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void Bubble_Sort ( int array[] );
void Selection_Sort ( int array[] );
int size_a;

int main(){
	int mode , array[30], i;
	cout << "Enter the sorting code:(1:bobble sort; 2:selection sort):"<< endl;
	cin >> mode;
	cout << "Enter your sorting size:"<< endl;
	cin >> size_a;
	cout << "Enter your sorting numbers:"<< endl;
	for ( i = 0 ; i < size_a ; i ++ ){
		cin >> array[i];
	}
	if ( mode == 1 ) {
		Bubble_Sort ( array );
		cout << "Bubble_Sort:" << endl;
	}
	else if ( mode == 2 ) {
		Selection_Sort ( array );
		cout << "Selection_Sort:" << endl;
	}
	for ( i = 0 ; i < size_a ; i ++ ){
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}	

void Bubble_Sort ( int array[] ){
	int i , j;
	for ( i = 0 ; i < size_a ; i ++ ){
		int min = array[i],temp,index; 
		for ( j = 0 ; j < size_a - i - 1; j ++ ){
			if ( array[j + 1] <= array[j] ) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}


void Selection_Sort ( int array[] ){
	int i , j;
	for ( i = 0 ; i < size_a ; i ++ ){
		int min = array[i],temp,index; 
		for ( j = i ; j < size_a ; j ++ ){
			if ( min >= array[j] ) {
				min = array[j];
				index = j;
			}
		}
		if ( min != array[i] ) {
			temp = array[i];
			array[i] = min;
			array[index] = temp;
		}
	}

}
