#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float peso[5];
	char empresa[5][50];
	char objeto[5][50];
	int opc, i;
	
	do{
		printf("[1] - CADASTRAR\n");
		printf("[2] - CONSULTAR\n");
		printf("[3] - ALTERAR\n");
		printf("[4] - SAIR\n");
		
		printf("ESCOLHA A OPCAO: ");
		scanf("%d", &opc);
		
		system("cls");
		
		switch(opc){
			
			case 1:
				for(i = 0; i < 5; i++){
					printf("Digite o nome da empresa: ");
					fflush(stdin);
					scanf("%[^\n]s", &empresa[i]);
					
					printf("Nome do objeto: ");
					fflush(stdin);
					scanf("%[^\n]s", &objeto[i]);
					
					do{
						printf("Peso: ");
						scanf("%f", &peso[i]);
						
						if(peso[i] > 900){
							printf("O valor utrapassou o valor maximo de 900kg.\n");
						}
						
					}while(peso[i] > 900);
					
					printf("\n");
					
				}
				
				system("cls");
				
				break;
			
			case 2:
				printf("CADASTROS: \n\n");
				for(i = 0; i < 5; i++){
					printf("Nome da empresa: %s \n", empresa[i]);
					printf("Objeto: %s \n", objeto[i]);
					printf("Peso: %.2f \n\n", peso[i]);
				}
				
				system("pause");
				system("cls");
				
				break;
				
			case 3:
				printf("ALTERACAO: \n\n");
				for(i = 0; i < 5; i++){
					printf("EMPRESA %d \n", i );
					printf("Nome da empresa: %s \n", empresa[i]);
					printf("Objeto: %s \n", objeto[i]);
					printf("Peso: %.2f \n\n", peso[i]);
				}
					i = 0;
					printf("Escolha a empresa: ");
					scanf("%d", &i);
					
					system("cls");
					
					printf("Nome da empresa: %s \n", empresa[i]);
					printf("Objeto: %s \n", objeto[i]);
					printf("Peso: %.2f \n\n", peso[i]);
					
					do{
						printf("Peso atual: %.2f \n", peso[i]);
						printf("Novo peso: ");
						scanf("%f", &peso[i]);
						
						if(peso[i] > 900){
							printf("O valor utrapassou o valor maximo de 900kg.\n");
						}
						
					}while(peso[i] > 900);
					
					system("cls");
				
				break;
			
			case 4:
				printf("Saiu do progrma.");
				break;
		}
		
		
		
	}while(opc != 4);
	
}
