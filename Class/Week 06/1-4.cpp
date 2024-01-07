#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void check ( int [9] );

int swi = 0;

int main(){
	srand ( time(0) );
	int g[9] , round = 1, player, com = 0,i ,j,counter = 0;
	for ( i = 0 ; i < 9 ; i ++){
		g[i] = counter;
		counter ++;
		cout << g[i] << " ";
		if ( i % 3 == 2) cout << endl;
	} 
	while ( swi == 0 && round < 6 ){
		cout << endl;
		cout << "Round" << round << endl;
		cout << "Player:" << endl; 
		int input_swi = 1, rand_swi = 1;
		cin >> player;
		while ( 1 ){
			if (((g[player] == 12) || ( g[player] == 11 ) || player > 8) && round <= 5 ) {
				cout << "Player:" << endl; 
				cin >> player;
			}
			else if( round >= 5 ) break;
			else break;
		} 
		g[player] = 11;
	
		check(g);
		if ( swi == 1 ) {
			cout << "you win!" << endl;
			break;
		}
		com = rand()%10;
		while ( 1 ){
			if ( (g[com] == 12) || ( g[com] == 11 )  ) com = rand()%9 ;
			else if ( round >= 5 ) break;
			else break;
		}
		g[com] = 12; 
	
		for ( i = 0 ; i < 9 ; i ++){
			if ( g[i] == 11) cout << "o" << " ";
			else if ( g[i] == 12) cout << "x" << " ";
			else cout << g[i] << " ";
			if ( i % 3 == 2) cout << endl;
		} 
		check(g);
		if ( swi == 2 ) {
			cout << "you lose!" << endl;
			break;
		}
		cout << endl;
		round++;
	}
	if ( round >= 5 && swi == 0) cout << "draw" << endl;
	return 0;
}

void check ( int g[9] ){
	if ( (g[0] == 11 && g[1] == 11 && g[2] == 11) ) swi = 1;
	else if	( (g[0] == 12 && g[1] == 12 && g[2] == 12) ) swi = 2;
	else if	( (g[3] == 11 && g[4] == 11 && g[5] == 11) ) swi = 1;
	else if	( (g[3] == 12 && g[4] == 12 && g[5] == 12) ) swi = 2;
	else if	( (g[6] == 11 && g[7] == 11 && g[8] == 11) ) swi = 1;
	else if	( (g[6] == 12 && g[7] == 12 && g[8] == 12) ) swi = 2;
	else if	( (g[0] == 11 && g[3] == 11 && g[6] == 11) ) swi = 1;
	else if	( (g[0] == 12 && g[3] == 12 && g[6] == 12) ) swi = 2;
	else if	( (g[1] == 11 && g[4] == 11 && g[7] == 11) ) swi = 1;
	else if	( (g[1] == 12 && g[4] == 12 && g[7] == 12) ) swi = 2;
	else if	( (g[2] == 11 && g[5] == 11 && g[8] == 11) ) swi = 1;
	else if	( (g[2] == 12 && g[5] == 12 && g[8] == 12) ) swi = 2;
	else if	( (g[0] == 11 && g[4] == 11 && g[8] == 11) ) swi = 1;
	else if	( (g[0] == 12 && g[4] == 12 && g[8] == 12) ) swi = 2;
	else if	( (g[2] == 11 && g[4] == 11 && g[6] == 11) ) swi = 1;
	else if	( (g[2] == 12 && g[4] == 12 && g[6] == 12) ) swi = 2;
	
}
