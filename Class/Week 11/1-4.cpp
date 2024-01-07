#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	vector<int> grade;
	int input, i, count[11] = {0}, temp,b;
	cout << "Enter each grade and then -1 to stop." << endl; 
	while ( 1 ){
		cin >> input;
		if ( input == -1 ) break;
		grade.push_back(input);
	}	
	for ( i = 0 ; i < grade.size() ; i ++ ){
		b = grade[i];
		temp = b / 10;
		switch ( temp ){
			case 0:
				count[temp] ++;
				break;
			case 1:
				count[temp] ++;
				break;
			case 2:
				count[temp] ++;
				break;
			case 3:
				count[temp] ++;
				break;
			case 4:
				count[temp] ++;
				break;
			case 5:
				count[temp] ++;
				break;
			case 6:
				count[temp] ++;
				break;
			case 7:
				count[temp] ++;
				break;
			case 8:
				count[temp] ++;
				break;
			case 9:
				count[temp] ++;
				break;
			case 10:
				count[temp] ++;
				break;
		}
	}
	for ( i = 0 ; i < 10 ; i ++ ){
		cout << count[i] <<  " grade(s) of [ " << i * 10 << " , " << i * 10 + 9  << " ]" << endl;
	}
	cout << count[10] <<  " grade(s) of 100 " << endl;
}

