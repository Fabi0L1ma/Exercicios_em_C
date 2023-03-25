//Como trocar a ordem dos elementos de um vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vet[20];
	int i; 
	
	srand(time(NULL));
	
	for(i = 0; i < 20; i++){
		vet[i] = 1 + rand() % 9;
	}
	
	printf("ORDEM ORIGINAL: ");
	for(i = 0; i < 20; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	printf("ORDEM IVERTIDA: ");
	for(i = 19; i >= 0; i--){
		printf("%d ", vet[i]);
	}
	
}
