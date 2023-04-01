// Faça um programa que imprima natela a diagonal principal de uma matriz 5 x 5.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(void){
	
	int mat[5][5];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			mat[i][j] = 1 + rand() % 9;
		}
	}
	
	cout << "MATRIZ: " << endl;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			cout << mat[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl;
	
	cout << "DIAGONAL DA MATRIZ: " << endl;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i == j){
				cout << mat[i][j] << " ";
			}
		}
	}
	
	return 0;
}
