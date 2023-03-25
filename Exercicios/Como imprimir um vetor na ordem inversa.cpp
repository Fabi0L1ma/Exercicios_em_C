// Faça um programa que leia 10 números reais e  os armazene em um vetor. Em seguida, leia um codigo inteiro e faça uma das ações abaixo:
// 0 - FINALIZAR O PROGRAMA;
// 1 - IMPRIME O VETOR NA ORDEM DO INICIO AO FIM;
// 2 - IMPRIME O VETOR NA ORDEM INVERSA;
// O programa deve funcionar até que o usuário digite 0 para finalizar;

#include <stdio.h>
#include <stdlib.h>

# define TAM 10

int main(){
	
	float vet[TAM];
	int i, opc = true;
	
	for(i = 0; i < TAM; i++){
		printf("VALOR: ");
		scanf("%f", &vet[i]);
	}
	
	printf("\n");
			
	while(opc != 0){
		
	printf("[0] - FINALIZAR O PROGRAMA\n");
	printf("[1] - IMPRIME O VETOR NA ORDEM DO INICO AO FIM\n");
	printf("[2] - IMPRIME O VETOR NA ORDEM INVERSA\n");
	printf("OPCAO: ");
	scanf("%d", &opc);
	
	printf("\n");
	
	switch(opc){
		case 0:
			printf("FINALIZOU O PROGRAMA");
			break;
		case 1:
			printf("VETOR ORDEM NORMAL: ");
			for(i = 0; i < TAM; i++){
				printf("%.2f ", vet[i]);
			}
			break;
		case 2:
			printf("VETOR ORDEM INVERSA: ");
			for(i = 9; i >= 0; i--){
				printf("%.2f ", vet[i]);
			}
			break;
		default:
			printf("VALOR INVALIDO");
	}
	printf("\n\n");			
	}	
}
