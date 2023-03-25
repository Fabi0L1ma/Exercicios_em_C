//Preencher um vetor B com o quadrado de cada elemento do vetor A

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetA[4], vetB[4];
	int i; 
	
	for(i = 0; i < 4; i++){
		printf("Digite o valor do vetor %d: ", i+1);
		scanf("%d", &vetA[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++){
		vetB[i] = vetA[i]*vetA[i];
	}
	
	printf("VETOR A:\n");
	for(i = 0; i < 4; i++){
		printf("VETOR %d: %d\n", i+1, vetA[i]);
	}
	
	printf("\n");
	
	printf("VETOR B:\n");
	for(i = 0; i < 4; i++){
		printf("VETOR %d: %d\n", i+1, vetB[i]);
	}
}
