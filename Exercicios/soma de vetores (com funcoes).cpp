#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void valores(float vet[], int tam){
	
	int i;
	
	for(i = 0; i < tam; i++){
		cout << "Digite o valor: ";
		cin >> vet[i];
	}
}

int somaValores(float vet[], int tam){
	
	int i, soma = 0;
	
	for(i = 0; i < tam; i++){
		soma += vet[i];
	}
	
	return soma;
}

int main(){
	
	float vet[6];
	
	valores(vet, 6);
	cout << endl;
	cout << "Soma dos valores: " << somaValores(vet, 6);
		
}
