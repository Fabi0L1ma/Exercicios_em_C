// Faça um progama que receba a temperatura média de cada mês do ano, armazazendo-as em um vetor. Ao final, mostre a maior e a menor tempertura do ano e em que mês 
// ocorreram (mostar o mês por extenso: janeiro, fevereiro). Discosidere empates.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int temp[12];
	int i, maior, menor, pos_M, pos_m; 
	
	
	for(i = 0; i < 12; i++){
		printf("DIGITE A TEMPERATURA DO MES %d: ", i+1);
		scanf("%d", &temp[i]);
	}
	
	for(i = 0; i < 12; i++){
		if(temp[i] > maior){
			maior = temp[i];
			pos_M = i;
		}
	}
	
	menor = temp[0];
	
	for(i = 0; i < 12; i++){
		if(temp[i] < menor){
			menor = temp[i];
			pos_m = i; 
		}
	}
	
	printf("\n");

	switch(pos_M){
		case 0:
			printf("JANEIRO");
			break;
		case 1:
			printf("FEVEREIRO");
			break;
		case 2:
			printf("MARCO");
			break;
		case 3:
			printf("ABRIL");
			break;
		case 4:
			printf("MAIO");
			break;
		case 5:
			printf("JUNHO");
			break;
		case 6:
			printf("JULHO");
			break;
		case 7:
			printf("AGOSTO");
			break;
		case 8:
			printf("SETEMBRO");
			break;
		case 9:
			printf("OUTUBRO");
			break;
		case 10:
			printf("NOVEMBRO");
			break;
		case 11:
			printf("DEZEMBRO");
			break;		
	}
	
	printf(" teve a MAIOR temperatura com: %d \n", maior);
	switch(pos_m){
		case 0:
			printf("JANEIRO");
			break;
		case 1:
			printf("FEVEREIRO");
			break;
		case 2:
			printf("MARCO");
			break;
		case 3:
			printf("ABRIL");
			break;
		case 4:
			printf("MAIO");
			break;
		case 5:
			printf("JUNHO");
			break;
		case 6:
			printf("JULHO");
			break;
		case 7:
			printf("AGOSTO");
			break;
		case 8:
			printf("SETEMBRO");
			break;
		case 9:
			printf("OUTUBRO");
			break;
		case 10:
			printf("NOVEMBRO");
			break;
		case 11:
			printf("DEZEMBRO");
			break;		
	}	
	printf(" teve o MENOR temperatura com: %d", menor);
}

