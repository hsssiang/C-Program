#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Trivia {
	private : 
		string question;
		string answer;
	public:
		Trivia ();
		void set ( string q , string a );
		string getq ();
		string geta ();
};

Trivia :: Trivia (){
	question = " ";
	answer = " ";
}

void Trivia :: set ( string q , string a ){
	question = q;
	answer = a;
}

string Trivia :: getq (){
	return question;
}

string Trivia :: geta (){
	return answer;
}

int main (){
	Trivia defult[5];
	int i, point = 0;
	string input_a;
	defult[0].set( "Year that Amelia Earhart disappeared?", "1983" );
	defult[1].set( "Which season that children will grow faster?", "spring" );
	defult[2].set( "Can human keep the eyes open when sneezeing?", "no" );
	defult[3].set( "Which muscle of human's body is most strongth?", "tongue" );
	defult[4].set( "What is the 49th state admitted to USA?", "alaska" );
	cout << "Trivia Game!" << endl;
	for ( i = 0 ; i < 5 ; i ++ ){
		cout << "You have $" << point << endl;
		cout << defult[i].getq() << endl;
		cin >> input_a;
		if ( defult[i].geta() == input_a ){
			point += 5;
			cout << "That right! You win $" << point <<endl;
		} 
		else {
			cout << "Sorry, the correct answer is: " << defult[i].geta() << endl;
		}
	}
	cout << "That's right! You win $" << points << endl;
	return 0;
}
