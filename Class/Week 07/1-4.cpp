#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class salarycount {
private:
	int workhour;	
	double totalSalary;
	double totalworkhour;
public:
	salarycount (){
		workhour = 0;
		totalSalary = 0;
		totalworkhour = 0;
	}
	void setSalary( int hour ){
		workhour = hour;
	}
	void countSalary ( ){
		int temp;
		if ( workhour <= 8 ){
			totalSalary += 160*workhour;
			totalworkhour += workhour;
		}
		else if ( workhour > 8 && workhour <= 10 ){
			totalSalary += 160*8;
			totalSalary += 160*1.33*(workhour - 8);
			totalworkhour += 8;
			totalworkhour += (workhour - 8)*1.33;
		}
		else if ( workhour >= 11 ){
			temp = workhour - 10;
			totalSalary += 160*8;
			totalSalary += 160*1.33*(workhour - 8 - temp);
			totalSalary += 160*1.66*(temp);
			totalworkhour += 8;
			totalworkhour += (workhour - 8 - temp)*1.33;
			totalworkhour += temp*1.66;
		}
	}
	void outputSalary ( ){
		cout << "Your total working hours : " << totalworkhour << endl;
		cout << "Your Salary : " << totalSalary << endl;
	}
};

int main(){
	salarycount N1;
	int i, hour;
	for ( i = 0 ; i < 7 ; i ++ ){
		cout << "Day" << i + 1 << ":" << endl;
		cin >> hour ;
		N1.setSalary (hour);
		N1.countSalary ( );
	}
	N1.outputSalary ( );
	return 0;
}	

