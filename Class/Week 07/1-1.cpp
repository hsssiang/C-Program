#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Grade {
	int score;
};

int main(){
	struct Grade input[6];
	bool finish;
	int i,j; 
	int score_input;
	for ( i = 0 ; i < 6 ; i ++ ){
		input[i].score = 0;
	}
	cout << "Initial struct, scores:";
	for ( i = 0 ; i < 5 ; i ++ ){
		cout << input[i].score ;
		if ( i < 4 ) cout << ",";
	}
	for ( i = 0 ; i < 5 ; i ++ ){
		if (input[i].score == 0){
			finish = false;
			break;
		}
	}
	cout << endl;
	if ( finish ) cout << "Finish intime : " << finish << endl;
	else {
		cout << "Finish intime : " << finish << endl;
		finish = true;
	}
	while (1){
		cout << "Please Key in scores" << endl;
		for ( i = 0 ; i < 5 ; i ++ ){
			cin >> input[i].score;
		}
	
		for ( i = 0 ; i < 5 ; i ++ ){
			if (input[i].score == 0){
				finish = false;
				break;
			}
		}
		if ( finish ) {
			cout << "Finish intime : " << finish << endl;
			break;
		}
		else {
			cout << "Finish intime : " << finish << endl;
			finish = true;
		}
	}
	return 0;
}	
	
