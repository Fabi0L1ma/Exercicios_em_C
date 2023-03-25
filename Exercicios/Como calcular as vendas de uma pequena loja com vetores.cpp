// Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos diferentes. O vendedor rece um salário de R$1100,00 acrescido de 5% 
// do valor total de suas vendas.

// 1 - O valor unitário dos objetos deve ser informado e armazenado em um vetor;
// 2 - A quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição.

// Crie um programa que receba os preços e as quantidades vendidas, armazennando-se em seus respectivos vetores. Depois, determine e mostre:

// 1 - A quantidade vendida;
// 2 - O valor unitári;
// 3 - O valor total de cada objeto.

// Ao final, deverão ser mostrados o valor total das vendas e o valor da coissão que será  paga ao vendedor.

// 2 - O valor do objeto mais vendido e sua posição no vetor (em caso de empate mostre todos empatados).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float valor_unitario[10], valor_total[10];
	int qtd_vendida[10];
	int i, pos;
	float total_vendas, bonus, maior;
	
	for(i = 0; i < 10; i++){
		printf("QUANTIDADE VENDIDA: ");
		scanf("%d", &qtd_vendida[i]);
		printf("VALOR UNITARIO: R$");
		scanf("%f", &valor_unitario[i]);
		valor_total[i] = qtd_vendida[i] * valor_unitario[i]; 
		total_vendas += valor_total[i];
		bonus = total_vendas*0.05;
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("VENDA %d: QTD: %d   VALOR UNITARIO: %.2f   VALOR TOTAL: R$%.2f \n",i+1, qtd_vendida[i], valor_unitario[i], valor_total[i]);
	}
	
	printf("\n");
	
	printf("VALOR TOTAL DAS VENDAS: R$%.2f \n", total_vendas);
	printf("COMISAO PAGA AO VENDEDOR: R$%.2f \n\n", bonus);
	
		for(i = 0; i < 10; i++){
			if(valor_unitario[i] > maior){
			maior = valor_unitario[i];
			pos = i;
			}
		}
		
		for(i = 0; i < 10; i++){
			if(valor_unitario[i] ==  maior){
				pos = i;
				printf("POSICAO %d: VALOR: R$%.2f\n", pos+1, valor_unitario[i]);
			}
		}
		
		return 0;
}
