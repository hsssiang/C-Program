#include<iostream>
using namespace std;
int main(void)
{
	int programDone = 0 , exam = 0, a , b;
	while (1){
		cout << "ProgramDone: ";
		cin >> programDone ; 
		cout << "Exam: ";
		cin >> exam;
		if ( exam >= 60 && programDone >= 10  ){
			cout << "Passed" << endl;
		}
		else {
			cout << "Failed" << endl;
		}
	}
	return 0;
}



	
