#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

struct aluno{
	string matricula;
	string nome;
	int qtdFaltas;
	float notas[5];
};

int main(void){
	
	aluno cad[20];
	int i, j, k;
	char resp;
	float media[20];
	float soma[20];
	
	
	do{
		
		cout << "MATRICULA: ";
		cin >> cad[i].matricula;
		cout << "NOME: ";
		cin >> cad[i].nome;
		cout << "QUANTIDADE DE FALTAS: ";
		cin >> cad[i].qtdFaltas;
		
		for(j = 0; j < 5; j++){
			cout << "NOTA  " << j+1 << ":";
			cin >> cad[i].notas[j];
			soma[i] += cad[i].notas[j];
		}
		
		media[i] = soma[i]/5;
			
		i++;
		
		cout << "CADASTRAR UM NOVO ALUNO: " ;
		cin >> resp;
		cout << endl;
		
	}while(resp != 'N' && resp != 'n' && i < 20);
	
	for(k= 0;  k < i; k++){
		cout << "MATRICULA: " << cad[k].matricula << endl;
		cout << "NOME: " << cad[k].nome << endl;
		cout << "FALTAS: " << cad[k].qtdFaltas << endl;
		
		if(media[k] >= 7.0 && cad[k].qtdFaltas <= 3){
			cout << "MEDIA: " << media[k] << endl;
			cout << "STATUS: (APROVADO)";
			cout << endl;
		}else{
			cout << "MEDIA: " << media[k] << endl;
			cout << "STATUS: (REPROVADO)";
			cout << endl; 
		}
	}
	
	return 0;
			
}
