#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class stuinfo {
	private: 
		string department, name, studentID, gender;
	public:
		stuinfo(){
			department = "";
			name = "";
			studentID = "";
			gender = "";
		}
		void setInfo ( string , string , string , string );
		void getInfo ();
};

int main(){
	class stuinfo input[3000];
	int counter = 0, i ;
	string dep = "", name, id, gender;
	while ( dep != "exit" ){
		cout << "Please input student's information" <<endl;
		cout << "Enter your department : " ;
		cin >> dep;
		if ( dep == "exit" ) {
			cout << "Stop entering" << endl;
			break;
		}
		cout << "Enter your name : " ;
		cin >> name;
		cout << "Enter your student id : " ;
		cin >> id;
		cout << "Enter your gender : " ;
		cin >> gender;
		while (1){
			if ( gender != "female" && gender != "male" ) {
				cout << "Gender input error , please enter again!" << endl;
				cin >> gender;
			}
			else break;
		}
		input[counter].setInfo ( dep, name ,id , gender );
		counter ++;
	}
	if (counter != 0 ){
		for ( i = 0 ; i < counter ; i ++ ){
			input[i].getInfo();
		}
	}
	return 0;
}	

void stuinfo::setInfo ( string dep , string nam , string id , string ged ){
	department = dep;
	name = nam;
	studentID = id;
	gender = ged;
}

void stuinfo::getInfo ( ){
	cout << "<<<The result>>>" << endl;
	cout << "Department : " <<  department << endl;
	cout << "Name : " <<  name << endl;
	cout << "Student ID : " <<  studentID << endl;
	cout << "Gender : " <<  gender << endl;
}
