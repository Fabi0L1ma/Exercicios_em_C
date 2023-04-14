#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int opc, i, j;
	int mat[20][4] = {{0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0}};
								  	   
	float valor;
	char lado, tipo, resp;
	
	do{
		
		cout << "                VENDA DE PASSAGENS" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "[1] - COMPRAR PASSAGEM" << endl;
		cout << "[2] - EXIBIR A OCUPACAO DO VOO" << endl;
		cout << "[3] - EXIBIR O VALOR TOTAL DE PASSAGEM VENDIDA" << endl;
		cout << "[0] - SAIR" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Escolha uma das opcoes: ";
		cin >> opc;
		
		system("cls");
		
		switch(opc){
			
			case 1:
				
				do{
					
					cout << " SELECIONE O LUGAR" << endl;
					cout << "--------------------" << endl;
					cout <<  "FILA" << "     J" << " C" << "  " << " C" << " J" << endl << endl;
				
					for(i = 0; i < 20; i++){
						for(j = 0; j < 4; j++){
					   		cout.width(2);
					   		
					   		if(j == 0 ){
					   	   		cout << i << "       ";
					   		}
					   		
					   		cout << mat[i][j];
					   		
					   		if(j == 1){
					   			cout << "  ";
					   		}
						}
					
						cout << endl;
					}
					cout << "--------------------";
				
					cout << endl;
					cout << "Selecione a fileira: ";
					cin >> i;
					cout << "Lado do aviao [E] ou [D]: ";
					cin >> lado;
					cout << "Tipo [C] ou [J]: ";
					cin >> tipo;
				
					if(lado == 'D' && tipo == 'J'){
						j = 3;
					}
					if(lado == 'D' && tipo == 'C'){
						j = 2;
					}
					if(lado == 'E' && tipo == 'J'){
						j = 0;
					}
					if(lado == 'E' && tipo == 'C'){
						j = 1;
					}
				
					if(mat[i][j] == 1){
						cout << endl;
						cout << "Lugar indisponivel" << endl << endl;
						valor += 0.0;
					}else{
						mat[i][j] = 1;
					
					if(i <= 4){
						valor += 700.0;
					}
					if(i > 4 && i <= 9){
						valor += 500.0;
					}
					if(i > 9){
						valor += 300.0;
					}
					
					}
				
					cout << "Quer continuar [S] ou [N]: ";
					cin >> resp;
				
					cout << endl;
					
					system("cls");
				
				}while(resp == 'S');
				
		
			break;
			
			case 2:
				cout << "  OCUPACAO DO VOO" << endl;
				cout << "--------------------" << endl;
				cout <<  "FILA" << "     J" << " C" << "  " << " C" << " J" << endl << endl;
				for(i = 0; i < 20; i++){
					for(j = 0; j < 4; j++){
						cout.width(2);
						
						if(j == 0){
							cout << i << "       ";
						}
						
						cout << mat[i][j];
						
						if(j == 1){
							cout << "   "; 
						}
					}
					cout << endl;
				}
				cout << "--------------------" << endl;
				
				system("pause");
				system("cls");
				
			break;
			
			case 3:
				cout << "VALOR TOTAL DAS PASSGENS VENDIDAS: R$" << valor << endl;
				cout << endl;
				system("pause");
				system("cls");
			
			break;
		}
		
	}while(opc != 0);
	
	return 0;
}
