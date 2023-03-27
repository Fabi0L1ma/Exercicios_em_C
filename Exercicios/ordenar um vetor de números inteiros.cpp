// Faça um programa para ordenar um vetor com 100 números inteiros.
// Imprima o vetor antes e após a ordenação.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vet[100];
	int i, j, aux;
	
	srand(time(NULL));
	
	for(i = 0; i < 100; i++){
		vet[i] = 1 + rand() % 99;
	}
	
	printf("Vetor SEM Ordenacao: ");
	for(i = 0; i < 100; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n \n \n");
	
	for(i = 0; i < 100; i++){
		for(j = 0; j < 100; j++){
			if(vet[i] < vet[j]){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
		}
			
		}

	}
	
	printf("Vetor ORDENADO: ");
	for(j = 0; j < 100; j++){
		printf("%d ", vet[j]);
	}
	
	return 0; 
}
