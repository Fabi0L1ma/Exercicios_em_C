//  Dadas duas matrizes A e B 3x3, faca um programa para calcular a soma das matrizes e salvar em uma matriz c. Imprima as três matrizes.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(void){
	
	int matA[3][3];
	int matB[3][3];
	int matC[3][3];
	
	int i, j, k; 
	
	srand(time(NULL));
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			matA[i][j] = 1 + rand() % 9;
			matB[i][j] = 1 + rand() % 9;
		}
	}
	
	cout << "MATRIZ A: " << endl; 
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << matA[i][j] << " ";
		}
		cout << endl; 
	}
	
	cout << endl;
	
	cout << "MATRIZ B:" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << matB[i][j] << " ";
		}
		cout << endl; 
	}
	
	cout << endl;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			matC[i][j] = matA[i][j] + matB[i][j];	
		}
	}
	
	cout << "MATRIZ C:" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << matC[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
