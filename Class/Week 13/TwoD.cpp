#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <string>
#include "TwoD.h"

using namespace std;

namespace hsiang{
	TwoD::~TwoD(){}
	TwoD::TwoD(){}
	TwoD::TwoD(int row , int col){
		this -> row = row;
		this -> col = col;
		this -> arrayp = new int * [row];
		for(int i = 0 ; i < row ; i++){
			this -> arrayp[i] = new int [col];
		}
		
	}
	void TwoD::input(){
		cout << "Enter the row and column dimensions of the array" << endl;
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				cin >> this -> arrayp[i][j];
			}
		}
	}
	void TwoD::output(){
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				cout << arrayp[i][j] << " ";
			}
			cout << endl;
		}
	}
	TwoD TwoD::operator + (TwoD obj){
		TwoD newm(row,col);
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				newm.arrayp[i][j] = this -> arrayp[i][j] + obj.arrayp[i][j];	
			}
		}
		return newm;
	}
	TwoD TwoD::operator = (TwoD obj){
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				this -> arrayp[i][j] = obj.arrayp[i][j];	
			}
		}
		return obj;
	}
}


