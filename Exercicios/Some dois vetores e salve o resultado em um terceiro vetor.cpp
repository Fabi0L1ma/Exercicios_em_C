//Some dois vetores e salve o resultado em um terceiro vetor 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vetA[25], vetB[25], vetC[25];
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < 25; i++){
		vetA[i] = 1 + rand() % 9;
		vetB[i] = 1 + rand() % 9;
	}
	
	for(i = 0; i < 25; i++){
		vetC[i] = vetA[i] + vetB[i];
	}
	
	printf("VETOR A: ");
	for(i = 0; i < 25; i++){
		printf("%5d ", vetA[i]);
	}
	
	printf("\n");
	
	printf("VETOR B: ");
	for(i = 0; i < 25; i++){
		printf("%5d ", vetB[i]);
	}
	
	printf("\n");
	
	printf("VETOR C: ");
	for(i = 0; i < 25; i++){
		printf("%5d ", vetC[i]);
	}
	
}
