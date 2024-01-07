#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;
int main(void)
{
	int i;
	srand(time(0));
	for ( i = 0 ; i < 10 ; i ++ ){
		cout << char((rand()%25)+66);
	}
	cout << endl;
	return 0;
}



		
