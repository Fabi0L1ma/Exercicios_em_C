// Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma matriz 10 x 10;

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(void){
	
	int matA[4][4];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matA[i][j] = 1 + rand() % 9;
		}
	}
	
	cout << "MATRIZ GERADA: " << endl << endl;
	for(i = 0; i < 10; i++){
		for(j= 0; j < 10; j++){
			cout << matA[i][j] << " "; 
		}
		cout << endl;
	}
	
	cout << endl;
	
	cout << "VALORES ABAIXO DA DIAGONAL PRINCIPAL:" << endl;
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(j < i){
				cout << matA[i][j] << " ";
			}
		}
		cout << endl; 
	}
	
}
