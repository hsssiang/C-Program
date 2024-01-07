#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	ifstream input( "trueanswer.txt" );
	ifstream inputma( "myanswer.txt" );
	char ta[30], trash, ma[30];
	int i = 0, score = 0;
	cout << "Start reading true answer and your answer ....." << endl;
	cout << "Question answer is : "; 
	input.get(trash);
	while ( !input.eof() ){
		ta[i] = trash;
		cout << ta[i];
		i ++;
		input.get(trash);
	}
	inputma.get(trash);
	i = 0;
	cout << "Your answer is : "; 
	while ( !inputma.eof() ){
		ma[i] = trash;
		cout << ma[i];
		i ++;
		inputma.get(trash);
	}
	i = 0;
	cout << "Calculating your score ...." << endl;
	while ( ta[i] != '\n' ){
		if ( ta[i] == ma[i] && ta[i] != ' ' ) score += 10;
		i ++;
	}
	cout << "Your score is : " << score << endl;
	return 0;
}	
