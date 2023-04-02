// Faca um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na tela.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(void){
	
	int matA[5][4];
	int linha;
	int matB[4][5];
	int i, j;
	int linhav[5];
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			matA[i][j] = 1 + rand() % 9;
		}
	}
	
	cout << "MATRIZ ORIGINAL:" << endl;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			cout << matA[i][j] << " ";
		}
		cout << endl;
	}
	
	for(j = 0; j < 4; j++){
		for(i = 0; i < 5; i++){
			matB[i][j] = matA[i][j];
		}
	}
	
	cout << endl;
	
	cout << "MATRIZ TARNSPOSTA:" << endl;
	for(j = 0; j < 4; j++){
		for(i = 0; i < 5; i++){
			cout << matB[i][j] << " ";
		}
		cout << endl;
	}

}
