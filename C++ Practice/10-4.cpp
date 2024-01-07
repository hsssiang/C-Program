#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Subscriber{
	private:
		string name;
		vector <string> channel;
	public:
		Subscriber (){
			name = "";
		}
		~Subscriber (){}
		void set_name( string input ){
			name = input;
		}
		void set_channel( string input ){
			channel.push_back ( input );
		}
		void reset (){
			channel.clear();
		}
		friend ostream& operator << ( ostream& out , Subscriber &obj ){
			out << "Name :" << obj.name << endl;
			out << "Number of channels: " << obj.channel.size() << endl;
			int i;
			for ( i = 0 ; i < obj.channel.size() ; i++ ){
				out << "	Channel " <<  i + 1 << ":" << obj.channel[i] << endl;
			}
			return out;
		}
		Subscriber operator = ( Subscriber obj ){
			this -> name = obj.name;
			this -> channel.assign(obj.channel.begin(), obj.channel.end());
			return obj;
		}

};

int main (){
	string user, temp;
	int i, time;
	Subscriber one;
	Subscriber two;
	cout << "Enter person name." << endl;
	cin >> user;
	one.set_name( user );
	cout << "Enter number of channels." << endl;
	cin >> time;
	for ( i = 0 ; i < time ; i ++ ){
		cout << "Enter name of channel " << i + 1 << endl;
		cin >> temp;
		one.set_channel( temp );
	}
	cout << endl << "Person 1's data:" << endl;
	cout << one;
	two = one;
	cout << endl << "Person 2's data after assignment for student 1:" << endl;
	cout << two;
	one.reset();
	cout << endl << "Person 1's data after reset:" << endl;
	cout << one;
	cout << endl << "Preson 2's data, should still habe origianal classes:" << endl;
	cout << two;
	return 0;
}
