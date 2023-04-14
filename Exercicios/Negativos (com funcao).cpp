#include <iostream>
#include <cstdlib>

using namespace std;

void entradaValores(int vet[], int tam){
	
	int i;
	
	for(i = 0; i < tam; i++){
		cout << "Digite o valor: ";
		cin >> vet[i];
	}
}

bool ehNeg(int vet[], int tam){
	
	int i, qtdNeg = 0;
	
	for(i = 0; i < tam; i++){
		if(vet[i] < 0){
			qtdNeg++;
		}
	}
	
	if(qtdNeg > 0){
		return true;
	}else{
		return false;
	}
	
}

int main(){
	
	int vet[5];
	
	entradaValores(vet, 5);
	if(ehNeg(vet, 5) == true){
		cout << "Possui valores negativos";
	}else{
		cout << "NAO possui valores negativos";
	}
}
