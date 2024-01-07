#include <iostream>
#include <cstdlib>
using namespace std;

void swap_value(double , double );
void swap_ref(double &, double &);

int main(){
	double n1, n2;
	cout << "Enter two numbers:" << endl;
	cin >> n1 >> n2;
	cout << "Your initial numbers : " << n1 << " " << n2 << endl;
	swap_value(n1 , n2 );
	cout << "In main function(after swap_value function): " << n1 << " " << n2 << endl;
	swap_ref(n1 , n2 );
	cout << "In main function(after swap_ref function): " << n1 << " " << n2 << endl;
	return 0;
}	

void swap_value(double n1, double n2){
	double temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "In swap_value function: " << n1 << " " << n2 << endl;
}
void swap_ref(double & n1 , double & n2 ){
	double temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "In swap_ref function: " << n1 << " " << n2 << endl;
}
