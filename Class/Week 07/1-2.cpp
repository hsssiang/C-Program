#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Grade {
	int score;
	double avg_element = 0;
	double min_element = 99999999;
	double max_element = -1;
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
			for ( i = 0 ; i < 5 ; i ++ ){
				input[5].avg_element += input[i].score;
				if ( input[5].min_element > input[i].score ){
					input[5].min_element = input[i].score;
				}
				if ( input[5].max_element < input[i].score ){
					input[5].max_element = input[i].score;
				}
			}	
			cout << "Averge : " << (input[5].avg_element / 5) << " ," ;
			cout << "Max : " << (input[5].max_element) << " ,";
			cout << "Min : " << (input[5].min_element) << endl;
			break;
		}
		else {
			cout << "Finish intime : " << finish << endl;
			input[5].avg_element = 0;
			input[5].min_element = 99999999;
			input[5].max_element = -1;
		}
	}
	return 0;
}	


	
