#include<iostream>
using namespace std;
int main(void)
{
	int a = 0;
	cin >> a;
	if ((a*a - 4*a + 3) < 0){
		cout << "Quadratic is negative."<< endl;
	}
	else cout << "Quadratic isn't negative."<< endl;
	// 2 < a < 3
	return 0;
}



	
