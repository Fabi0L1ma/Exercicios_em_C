#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int mat[3][3];
	int i, j; 
	
	srand(time(NULL));
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mat[i][j] = 1 + rand() % 9;
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
