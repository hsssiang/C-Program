#include <cstdlib>
#include <string>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;



int main(void){
	string s;
	string eof;
	getline(cin,s);
	int ansarr[100]={0};
	int k=0;
	while(1){
		string keyword;
		cin >> keyword;
		if(keyword=="EOF")break;
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		for(int i=0;i<keyword.length();i++){
			keyword[i]=tolower(keyword[i]);
		}
		for(int i=0;i<s.length();i++){
			if(s.compare(i,keyword.length(),keyword)==0){
				if(((s[i-1]<97 || s[i-1]>122 || i==0 ) && (s[i+keyword.length()]<97 || s[i+keyword.length()]>122 || i==s.length()))){
					ansarr[k]++;
				}
			}
		}
		k++;
	}
	for(int i=0;i<k;i++){
		cout << ansarr[i] << " ";
	}
	cout << endl;
}
