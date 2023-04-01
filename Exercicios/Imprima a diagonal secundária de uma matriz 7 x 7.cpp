// Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x7.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(void){
	
	int mat[7][7];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			mat[i][j] = 1 + rand() % 9;
		}
	}
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	cout << "Diagonal Primaria: " << endl;
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			if(i == j){
				cout << mat[i][j] << " ";
			}
		}
	}
	cout << endl;
	
	cout << "Diagonal Secundaria: " << endl;
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			if(i + j == 6){
				cout << mat[i][j] << " ";
			}
			
		}
	}
	
	
	return 0;
}
