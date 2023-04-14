#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void preencherMatriz(int mat[20][4]){
	
	int i, j;
	
	for(i = 0; i < 20; i++){
		for(j = 0; j < 4; j++){
			mat[i][j] = 0;
		}
	}
}

void layoutVendas(int opc){
	
	cout << "                VENDA DE PASSAGENS" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "[1] - COMPRAR PASSAGEM" << endl;
	cout << "[2] - EXIBIR A OCUPACAO DO VOO" << endl;
	cout << "[3] - EXIBIR O VALOR TORAL DE PASSAGEM VENDIDA" << endl;
	cout << "[0] - SAIR" << endl;
	cout << "------------------------------------------------------" << endl;
}

void layoutLugar(int mat[20][4]){
	
	int i, j;
	
	cout << " SELECIONE O LUGAR" << endl;
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
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << "--------------------";
	cout << endl;
}

void selectLugar_ePreco(int mat[20][4], int i, char lado, char tipo, float &valor){
	
	int  j;
	
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
		cout << "LUGAR OCUPADO" << endl << endl;
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
}

int main(){
	
	int mat[20][4];
	int opc, i;
	char resp, lado, tipo;
	float valor;
	
	preencherMatriz(mat);
	
	do{
		
		layoutVendas(opc);
		
		cout << "Escolha uma das opcoes: ";
		cin >> opc;
		system("cls");
		
		switch(opc){
			
			case 1:
				do{
					layoutLugar(mat);
					
					cout << "FILEIRA: ";
					cin >> i;
					cout << "Lado [E] ou [D]: ";
					cin >> lado;
					cout << "Tipo [C] ou [J]: ";
					cin >> tipo;
					
					selectLugar_ePreco(mat, i, lado, tipo, valor);
					
					cout << "Quer continuar [S] ou [N]: ";
					cin >> resp;
					system("cls");
				}while(resp == 'S');
			break;
			
			case 2:
				layoutLugar(mat);
				system("pause");
				system("cls");
			break;
			
			case 3:
				cout << "VALOR TOTAL DAS PASSAGENS VENDIDAS: R$" << valor << endl << endl;
				system("pause");
				system("cls");
			break;	
		}	
	}while(opc != 0);	
}
