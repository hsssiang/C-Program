
#include <iostream>
#include <cmath>
#include <string> 
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int* merge(int* , int* , int  , int );
int* mergeSort(int* , int );

int main (){
	char tar1[100],tar2[100],tar3[100];
	int i;
	int seqint[100], counter = 0;
	char ssq1[100], ssq2[100],temp;
	cout << "Enter the first of two input file names: ";
	cin >> tar1;
	cout << "Now a second input file name: ";
	cin >> tar2;
	cout << "Enter the output file name: ";
	cin >> tar3;
	ifstream inputsq1(tar1);
	ifstream inputsq2(tar2);
	ofstream outputsq3(tar3);
	cout << "Contents of file " << tar1 << " are:" << endl ; 
	while (inputsq1 >> seqint[counter]) {
        cout << seqint[counter] << endl;
        counter ++;
    }
	cout << "Contents of file " << tar2 << " are:" << endl ; 
	while (inputsq2 >> seqint[counter]) {
        cout << seqint[counter] << endl ;
        counter ++;
    }
    int* newSeq = mergeSort(&seqint[0] , counter);
	cout << "Contents of merged file " << tar3 << " are:" << endl ;
	for ( i = 0 ; i < counter ; i ++ ){
		cout << newSeq[i] << endl;
		outputsq3 << newSeq[i] << " ";
	}
	return 0;
} 

int* merge(int* tar1, int* tar2, int len1, int len2){
	int temp1 = 0,temp2 = 0;
	int* newarryp = new int[len1 + len2];
	while(temp1 < len1 && temp2 < len2){
		if (tar1[temp1] >= tar2[temp2]){
			newarryp[temp1 + temp2] = tar2[temp2];
			temp2++;
		}
		else{
			newarryp[temp1 + temp2] = tar1[temp1];
			temp1++;
		}
	}
	for (temp1 ; temp1 < len1 ; temp1 ++) newarryp[temp1 + temp2] = tar1[temp1];
	for (temp2 ; temp2 < len2 ; temp2 ++) newarryp[temp1 + temp2] = tar2[temp2];
	delete tar1;
	delete tar2; 
	return newarryp;
}

int* mergeSort(int* p, int len){
	if (len == 1) return p;
	int* tar1 = new int[len / 2];
	int* tar2 = new int[len - len / 2];
	for (int i = 0 ; i < len / 2 ; i ++) tar1[i] = p[i];
	for (int i = 0 ; i < len - len / 2 ; i ++) tar2[i] = p[i + len / 2];
	return merge(mergeSort(tar1 , len / 2) , mergeSort(tar2, len - len / 2) , len / 2 , len - len / 2);
}
