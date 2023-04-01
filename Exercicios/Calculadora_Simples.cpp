#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
	
	int opc;
	float x, y, cal;
	
	do{
		
		cout << "CALCULADORA" << endl;
		cout << "[1] - SOMA" << endl;
		cout << "[2] - SUBTRACAO" << endl;
		cout << "[3] - MULTIPLICACAO" << endl; 
		cout << "[4] - DIVISAO" << endl;
		cout << "[5] - SAIR" << endl;
		cout << "Digite a opcao: ";
		cin >> opc;
		
		system("cls");
		
		switch(opc){
			
			case 1:
				cout << "SOMA" << endl;
				cout << "PRIMEIRO VALOR: ";
				cin >> x;
				cout << "SEGUNDO VALOR: ";
				cin >> y;
				
				cal = x + y;
				
				cout << "CLACULO: " << x << "+" << y <<" = " << cal << endl; 
				
				system("pause");
				system("cls");
				
				break;
			
			case 2:
				cout << "SUBTRACAO" << endl;
				cout << "PRIMEIRO VALOR: ";
				cin >> x;
				cout << "SEGUNDO VALOR: ";
				cin >> y;
				
				cal = x - y;
				
				cout << "CLACULO: " << x << "-" << y <<" = " << cal << endl; 
				
				system("pause");
				system("cls");
				
				break;
			
			case 3:
				cout << "MULTIPLICACAO" << endl;
				cout << "PRIMEIRO VALOR: ";
				cin >> x;
				cout << "SEGUNDO VALOR: ";
				cin >> y;
				
				cal = x * y;
				
				cout << "CLACULO: " << x << "*" << y <<" = " << cal << endl; 
				
				system("pause");
				system("cls");
				
				break;
				
			case 4:
				cout << "SOMA" << endl;
				cout << "PRIMEIRO VALOR: ";
				cin >> x;
				cout << "SEGUNDO VALOR: ";
				cin >> y;
				
				cal = x / y;
				
				cout << "CLACULO: " << x << "/" << y <<" = " << cal << endl; 
				
				system("pause");
				system("cls");
				
				break;
		
		}
			
	}while(opc != 5);
	
}
