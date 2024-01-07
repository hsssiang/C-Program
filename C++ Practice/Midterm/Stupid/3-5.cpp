#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(void)
{
	srand(time(0));
	int num = 0;
	num = (rand() % 5) + 5;
	cout << num << endl;
	return 0;
}



	
