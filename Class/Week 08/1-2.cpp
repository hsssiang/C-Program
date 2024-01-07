#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class stuinfo {
	private: 
		string department, name, studentID, gender;
	public:
		stuinfo( string dep , string nam , string id , string ged ): department (dep), name (nam), studentID (id), gender (ged){}
		stuinfo( ):department (""), name (""), studentID (""), gender (""){}
		void getInfo ();
};

int main(){
	int counter = 0, i ;
	string dep = "", name, id, gender;
	cout << "Please input student's information" <<endl;
	cout << "Enter your department : " ;
	cin >> dep;
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
	class stuinfo input( dep, name ,id , gender );
	input.getInfo();
	return 0;
}	

void stuinfo::getInfo ( ){
	cout << "The result:" << endl;
	cout << "Department : " <<  department << endl;
	cout << "Name : " <<  name << endl;
	cout << "Student ID : " <<  studentID << endl;
	cout << "Gender : " <<  gender << endl;
}
